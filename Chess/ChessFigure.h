/* 
 * File:   ChessFigure.h
 * Author: JenLaptop
 *
 * Created on 14. April 2014, 15:21
 */

#ifndef CHESSFIGURE_H
#define	CHESSFIGURE_H

#include "Point.h"
#include "LinkList.h"
#include <list>


enum Color{ WHITE=0, BLACK };
    
class ChessFigure {
public:
   
    ChessFigure();
    ChessFigure(char type, Color color, Point point) : position_(point){
    type_ = (( color == Color.WHITE )? toupper(type) else tolower(type));
    }
       
    ChessFigure(const ChessFigure& orig);
    virtual ~ChessFigure();

    //Location
    Point getLocation() const { return position_; }
    void setLocation(Point point){position_= point;}
    
    //Color
    Color getColor(){ return (isupper(type_))? Color.WHITE : Color.BLACK; }
    void setColor(Color c){  if( c == WHITE ) toupper(type_);  else tolower(type_); }
    bool isWhite(){ return isupper(type_); }
    bool sameColor(Color color){ return (getColor()==color); }
    
    //Type
    char getType(){ return type_; }
    void setType(char type){ type_= type; }
    
    //List of Moves
    std::list* GetListOfMmoves(){ return moves_;  }
    addMmove(Point p){ moves_.insert(p); }   

    bool Pawn::move(Point p){
    for(Point& move : moves_){
        if ( this.getLocation()+move == p ) return true;
    }
    return false;
    }
    
protected:
   // LinkList moves_
    std::list<Point*> moves_;

private:
    //Typ der Schachfigur
    char type_;
   // Color color_;
    Point position_;
    
};

#endif	/* CHESSFIGURE_H */

