/*
 * File:   main.cpp
 * Author: moore
 *
 * Unit Testing for the class "Point"
 */

#include "UnitTestsMain.h"

int main( int argc, char* argv[] ) {
    UnitTestsMain test;
    test.TestBoardClass();
    //test.TestPointClass();
    
    
    /*
    void insert(Point point, char figure);
    LinkNode* getLinkNode(Point p);
    void move(Point from,Point to);
    bool isElementThere(Point p);
    bool clear(Point point);
    */
    
   // Board board;
   // board.print_board();
    
    
    //Schachfiguren
    //Pawn test( 'P', ChessFigure::WHITE, Point(2,2) );
    //std::cout << test.getColor() << " " << test.getLocation() << " " << test.getType() << std::endl;

    //Pawn test2( 'P', ChessFigure::WHITE, Point(2,3) );
//    assertTrue( test2.move( (2,4) ), "Bauer von B3 >> B4" );
//    assertTrue( test2.move( Point(2,5) ), "Bauer von B4 >> B5" );
//    assertTrue( ! test2.move( Point(2,4) ), "Bauer von B4 << B5" );
    
    /*
     * 
    for(int i=1; i<=8; i++){
        //A2 B2...
        Point point(i,2);
        elemType bauer(point, 'B'); 
    }
     */
    /*


*/

//    LinkList list;
//    LinkList list;
//    
//    list.insert('c');
//    list.insert('p');
//    assertTrue(list.getSize() == 2, "2 Items in List" );
//    list.clear('c');
//    assertTrue(list.getSize() == 1, "1 Item in List" );



//    //Weiß Bauer A2 B2 C2 ...  H2
//    list.insert(Point('A',2),'P');
//    assertTrue( list.isElementThere(Point('A',2)) , "Figures Sucessfull Added" );
//    list.insert(Point('B',2),'P');
//    assertTrue(list.getSize() == 2, "2 Figures in List" );
//    assertTrue(! list.clear(Point('C',3)), "Not removed");
//    assertTrue(list.getSize() == 2, "Size not enlarged" );
//    
//    list.clear(Point('A',2));
//    assertTrue(list.getSize() == 1, "removed figure" );
//    
//    assertTrue(list.getLinkNode(Point('B',2))->getElem()=='P', "Bauer auf B2" );            
//    assertTrue(list.move(Point('B',2),Point('B',3)), "Bauer B2 >> B3");
//    assertTrue(list.getLinkNode(Point('B',2))->getElem()=='-', "kein Bauer auf B2" );
//    assertTrue(list.getLinkNode(Point('B',3))->getElem()=='P', "Bauer at B3" );
//    
//    list.insert(Point('B',4),'P');
//    assertTrue(list.move(Point('B',3),Point('B',4)) == false, "Not allowed to kill own figure" );
    
    
   
    //std::vector<std::vector<int>> twod;
    
    return 0; // i.e. OK
} // end main

