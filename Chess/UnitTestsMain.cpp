/* 
 * File:   UnitTestsMain.cpp
 * Author: Peter Kilian
 * 
 * Created on 19. April 2014, 17:58
 */
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


#include "UnitTestsMain.h"
#include "UnitTesting.h" // for the Unit Testing Assertions
#include "Point.h"       // for the Point Class
#include "LinkList.h"
#include "ChessFigure.h"
#include "Pawn.h"
#include "Board.h"

UnitTestsMain::UnitTestsMain() {
}

UnitTestsMain::UnitTestsMain(const UnitTestsMain& orig) {
}

UnitTestsMain::~UnitTestsMain() {
}

void UnitTestsMain::TestLinkListClass(){
   
    ChessFigure p1=Pawn(ChessFigure::WHITE, Point(3,2));
    ChessFigure p2=Pawn(ChessFigure::BLACK, Point(3,2));
    
    LinkList list;
    assertTrue(list.getSize() == 0, "0 Item in List" );
     
    list.insert(p1);
    list.print();
    
    //list.insert(p2);
    //list.print();
      
    //assertTrue(list.getSize() == 2, "2 Item in List" );
}
    
    void UnitTestsMain::TestChessFigureClass(){
    }
    
    void UnitTestsMain::TestBoardClass(){
     /*
        Board board;
            for(int i=1; i<=8; i++){
             board.insert(  Pawn('P', ChessFigure::WHITE, Point(i,2)) );
             board.insert(  Pawn('p', ChessFigure::BLACK, Point(i,7)) );
            }
        board.insert( Pawn('K', ChessFigure::WHITE, Point(4,1)) );
        board.insert( Pawn('K', ChessFigure::BLACK, Point(4,7)) );
        
        board.print();
        board.print_board();
      **/
    }
    
void UnitTestsMain::TestPointClass(){
    std::cout << "Starting Unit Tests for Class Point" << std::endl;

    Point p, q;
    assertTrue( (p == q), "All Points are constructed equal" );
    assertTrue( !(p != q), "All Points are constructed not equal" );

    Point r( p );
    assertTrue( (p == r), "Copy Constructor constructs equal copies" );

    Point TwiceTwo( 2, 2 );
    assertTrue( (TwiceTwo != p), "Point (2, 2) =/= simple constructor points" );

    Point origin( 0, 0 );
    assertTrue( (TwiceTwo != origin), "Point (2, 2) =/= (0, 0)" );
    assertTrue( (origin == p), "Point (0, 0) == simple constructor point" );

    Point FourFour( 4, 4 );
    Point TwiceTwiceTwo = TwiceTwo + TwiceTwo;
    assertTrue( (TwiceTwiceTwo == FourFour), "Point (2, 2) + (2,2) == (4, 4)" );

    TwiceTwo += TwiceTwo;
    assertTrue( (TwiceTwo == FourFour), "Point (2, 2) += (2,2) == (4, 4)" );

    Point OneThree( 1, 3 );
    Point ThreeOne( 3, 1 );
    assertTrue( (OneThree != ThreeOne), "Point (1, 3) =/= (3, 1)" );

    Point TwoSix( 2, 6 );
    assertTrue( (TwoSix == OneThree * 2), "Point (2, 6) == (1,3) * 2" );

    Point TwiceOneThree = OneThree;
    TwiceOneThree *= 2;
    assertTrue( (TwoSix == TwiceOneThree), "Point (2, 6) == (1,3) *= 2" );

    Point MinusOneThree = OneThree * -1;
    Point Nix = OneThree + MinusOneThree;
    assertTrue( (origin == Nix), "Point p + -p = Nothing at all (origin)" );

    std::cout << "Finished Unit Tests for Class Point" << std::endl;
}