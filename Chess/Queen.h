/* 
 * File:   Queen.h
 * Author: JenLaptop
 *
 * Created on 14. April 2014, 16:10
 */

#ifndef QUEEN_H
#define	QUEEN_H
#include "Point.h"
#include "ChessFigure.h"

class Queen : public ChessFigure {
public:
    Queen(){}
    Queen(char type, Color color, Point pos ): ChessFigure(type, color, pos){}
    virtual ~Queen(){}
private:

};

#endif	/* QUEEN_H */

