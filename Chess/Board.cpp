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
