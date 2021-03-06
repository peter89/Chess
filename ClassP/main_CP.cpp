/*
 * File:   main.cpp
 * Author: moore
 *
 * Unit Testing for the class "Point"
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
//#include <vector>

#include "UnitTesting.h" // for the Unit Testing Assertions
#include "Point.h"       // for the Point Class
#include "LinkList.h"
#include "LinkNode.h"    // for the LinkedList Class

int main( int argc, char* argv[] ) {
    /*
    void insert(Point point, char figure);
    LinkNode* getLinkNode(Point p);
    void move(Point from,Point to);
    bool isElementThere(Point p);
    bool clear(Point point);
    */
    
    LinkList list;
    //Weiß Bauer A2 B2 C2 ...  H2
    list.insert(Point('A',2),'P');
    assertTrue( list.isElementThere(Point('A',2)) , "Figures Sucessfull Added" );
    list.insert(Point('B',2),'P');
    assertTrue(list.getSize() == 2, "2 Figures in List" );
    assertTrue(! list.clear(Point('C',3)), "Not removed");
    assertTrue(list.getSize() == 2, "Size not enlarged" );
    
    list.clear(Point('A',2));
    assertTrue(list.getSize() == 1, "removed figure" );
    
    assertTrue(list.getLinkNode(Point('B',2))->getElem()=='P', "Bauer auf B2" );            
    assertTrue(list.move(Point('B',2),Point('B',3)), "Bauer B2 >> B3");
    assertTrue(list.getLinkNode(Point('B',2))->getElem()=='-', "kein Bauer auf B2" );
    assertTrue(list.getLinkNode(Point('B',3))->getElem()=='P', "Bauer at B3" );
    
    list.insert(Point('B',4),'P');
    assertTrue(list.move(Point('B',3),Point('B',4)) == false, "Not allowed to kill own figure" );
    
    
    
    //
    
    
    
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
    //std::vector<std::vector<int>> twod;
    
    return 0; // i.e. OK
} // end main

