/* 
 * File:   ChessFigure.h
 * Author: JenLaptop
 *
 * Created on 14. April 2014, 15:21
 */

#ifndef CHESSFIGURE_H
#define	CHESSFIGURE_H

#include "Point.h"


enum Color{ WHITE=0, BLACK };
    
class ChessFigure {
public:
    enum Color{ WHITE=0, BLACK };
   
    ChessFigure();
    ChessFigure(char type, Color color, Point point) : type_(type), color_(color), position_(point){}
    
    ChessFigure(const ChessFigure& orig);
    virtual ~ChessFigure();

    Point getLocation() const { return position_; }
    void setLocation(Point point){position_= point;}
    
    Color getColor(){return color_; }
    void setColor(Color c){ color_= c; }
    
    char getType(){ return type_; }
    void setType(char type){ type_= type; }
    

    bool operator==( ChessFigure otherElement) const
    {
        return((type_== otherElement.type_)&&(color_== otherElement.color_));
    }

//bool move(ChessFigure f, Point p){
//LinkList allowed_moves;  //liste mit möglichen zügen
//
//    if (f.getColor() == WHITE)     
//      allowed_moves.insert( f.getLocation() + Point (0,1) );
//    else  allowed_moves.insert( f.getLocation() + Point (0,-1) );
//
//    if ( allowed_moves.search_for(p) != NULL) return true;
//
//return false;
//}


protected:
    char type_;
    Color color_;
    Point position_;
    
};

#endif	/* CHESSFIGURE_H */

