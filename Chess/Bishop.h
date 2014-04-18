/* 
 * File:   Bishop.h
 * Author: JenLaptop
 *
 * Created on 14. April 2014, 16:11
 */

#ifndef BISHOP_H
#define	BISHOP_H
#include "Point.h"
#include "ChessFigure.h"

class Bishop : public ChessFigure {
public:
    Bishop(){}
    Bishop(char type, Color color, Point pos ): ChessFigure(type, color, pos){}
    virtual ~Bishop(){}
private:

};

#endif	/* BISHOP_H */

