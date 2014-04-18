/* 
 * File:   Board.cpp
 * Author: JenLaptop
 * 
 * Created on 15. April 2014, 17:40
 */

#include "Board.h"
#include "LinkList.h"
#include <iostream>

#include "ChessFigure.h"
#include "Pawn.h"
Board::Board() {
    for(int i=1; i<=8; i++){
        board_.insert(  Pawn('P', ChessFigure::WHITE, Point(i,2)) );
        board_.insert(  Pawn('p', ChessFigure::BLACK, Point(i,7)) );
    }
        board_.insert( Pawn('K', ChessFigure::WHITE, Point(4,1)) );
        //board_.insert( Pawn('K', ChessFigure::BLACK, Point(4,7)) );
        board_.print();
}

Board::Board(const Board& orig) {
}

Board::~Board() {
}

void Board::print_board(){
    for(int x=1; x<=8; x++){
        for(int y=1; y<=8; y++){
            ChessFigure cf=board_.search_for(Point(x,y))->getElem();
            std::cout << "P(" << cf.getLocation().row()<<","<<cf.getLocation().column()<<")";
        }
        std::cout << std::endl;
    }
}
