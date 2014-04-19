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
#include "LinkList.h"

class Pawn : public ChessFigure {
public:
    Pawn(Color color, Point pos) : ChessFigure('P', color, pos){ this->addMmoves(); }
    virtual ~Pawn(){}

private:
    addMmoves();
};

#endif	/* PAWN_H */

