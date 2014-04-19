/* 
 * File:   King.cpp
 * Author: JenLaptop
 * 
 * Created on 14. April 2014, 16:11
 */

#include "King.h"

bool King::addMmoves(){
    moves_.insert( Point (0,1) );
    moves_.insert( Point (0,-1) );
    moves_.insert( Point (1,0) );
    moves_.insert( Point (-1,0) );
    moves_.insert( Point (-1,-1) );
    moves_.insert( Point (1,1) );
    moves_.insert( Point (1,-1) );
    moves_.insert( Point (-1,1) );
}