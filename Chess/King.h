/* 
 * File:   King.h
 * Author: JenLaptop
 *
 * Created on 14. April 2014, 16:11
 */

#ifndef KING_H
#define	KING_H
#include "Point.h"
#include "ChessFigure.h"

class King : public ChessFigure {
public:
    King(){}
    King(char type, Color color, Point pos ): ChessFigure(type, color, pos){}
    virtual ~King(){}

    bool move(ChessFigure f, Point p);
private:
    addMmoves();
};

#endif	/* KING_H */

