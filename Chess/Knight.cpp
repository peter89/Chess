/* 
 * File:   Knight.cpp
 * Author: JenLaptop
 * 
 * Created on 14. April 2014, 16:12
 */

#include "Knight.h"

bool Pawn::addMmoves(){
        moves_.insert( Point(1,1) );
        moves_.insert( Point(1,-1) );
        moves_.insert( Point(-1,-1) );
        moves_.insert( Point(-1,1) );
}