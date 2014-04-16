/* 
 * File:   Point.h
 * Author: Peter Kilian, Jenny Queckbörner
 *
 * Created on 8. April 2014, 12:06
 */

#include <ostream>

#ifndef POINT_H
#define	POINT_H

class Point {
private:
    int row_;
    int column_;

public:

     // Constructors:
     Point( ) {
         row_ = 0; 
         column_ = 0;
     };
     
     Point( int row, int column ) : row_(row), column_(column) { };
     
     //new with charsss
     Point( char row, int column ) { 
         row_ = ( toupper(row) - 65 );
         column_ = column;
     };
     
     // Copy Constructor
     Point( const Point& otherPoint ) : row_(otherPoint.row_), column_(otherPoint.column_) { };
     
     // Take the automatic Destructor

     // Overloaded Operators
    
     // Equality: Are Points p & q equal? Is p == q?
     bool operator==( const Point otherPoint ) const {
         return((row_ == otherPoint.row_)&&(column_ == otherPoint.column_));
     }
     
     bool operator!=( const Point otherPoint ) const {
         return ! ( (row_ == otherPoint.row_)&&(column_ == otherPoint.column_) );
         //return !( *this == otherPoint );
     }

     // Addition: Add some point to the current point. p += q
     Point operator+=( const Point otherPoint ) {
         this->row_ += otherPoint.row_; 
         this->column_ += otherPoint.column_;
         return *this;
     }

     // Addition: Add two points to obtain p + q
     Point operator+( const Point otherPoint ) const { 
         Point result = *this;
         result += otherPoint;    
         return result; 
     }

     // Scalar Multiplication: Multiply a point times an integer. p *= s
     Point operator*=( int scale )  { 
         row_ *= scale;
         column_ *=  scale;
         return *this;
     };

     // Scalar Multiplication: Multiply a point times an integer. p * s
     Point operator*( int scale ) const { 
         Point result = *this;
         result *= scale;
         return result; 
     };
   
     //getter/setter
     int& row(){ return row_; }
     int& column(){ return column_; }
     
    
    // Friend-Deklarationen für Ein-/Ausgabe
       
    // Stream Output Function    
     /*
    friend std::ostream& operator<< (std::ostream& stream, const Point& point) {
        int row=point.row_+65;
        return char(row) << this->column_;
    }
      * */
/*
    friend std::istream& operator>>(std::istream& stream, Point& point) { 
       stream >> point.row_;
       stream >> point.column_;
       return stream;
    }
*/  
 }; // end class Point
    
 // Definition Ein-/Ausgabeoperator


/*
    std::istream& operator>>(std::istream& Stream, Point& PT){
        //PT.row() = (int( Stream.get() ) - 65);
        //PT.column() = int (Stream.get());
        return Stream;
    }
*/
#endif	/* POINT_H */