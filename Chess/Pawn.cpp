/* 
 * File:   Pawn.cpp
 * Author: JenLaptop
 * 
 * Created on 14. April 2014, 15:35
 */

#include "Pawn.h"

bool Pawn::addMmoves(){
    if ( this->isWhite() == WHITE)     
        moves_.insert( Point(0,1) );
    else
        moves_.insert( Point(0,-1) );
}