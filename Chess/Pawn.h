/* 
 * File:   Pawn.h
 * Author: JenLaptop
 *
 * Created on 14. April 2014, 15:35
 */

#ifndef PAWN_H
#define	PAWN_H
#include "Point.h"
#include "ChessFigure.h"

class Pawn : public ChessFigure {
public:
    Pawn(){}
    Pawn(char type, Color color, Point pos ): ChessFigure(type, color, pos){}
    virtual ~Pawn(){}
    
        bool move(Point p);
        
private:

};

#endif	/* PAWN_H */

