/* 
 * File:   Rook.h
 * Author: JenLaptop
 *
 * Created on 14. April 2014, 16:12
 */

#ifndef ROOK_H
#define	ROOK_H
#include "Point.h"
#include "ChessFigure.h"

class Rook : public ChessFigure{
public:
    Rook(){}
    Rook(char type, Color color, Point pos ): ChessFigure(type, color, pos){}
    virtual ~Rook(){}
private:

};

#endif	/* ROOK_H */

