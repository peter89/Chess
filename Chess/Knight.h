/* 
 * File:   Knight.h
 * Author: JenLaptop
 *
 * Created on 14. April 2014, 16:12
 */

#ifndef KNIGHT_H
#define	KNIGHT_H
#include "Point.h"
#include "ChessFigure.h"

class Knight : public ChessFigure {
public:
    Knight(){}
    Knight(char type, Color color, Point pos ): ChessFigure(type, color, pos){}
    virtual ~Knight(){}
    
    bool move(ChessFigure f, Point p);
private:

};

#endif	/* KNIGHT_H */

