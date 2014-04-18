/* 
 * File:   Point.h
 * Author: Peter Kilian, Jenny Queckbörner
 *
 * Created on 8. April 2014, 12:06
 */



#ifndef POINT_H
#define	POINT_H

#include <ostream>
#include <ctype.h> //toupper

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
     
     //new with chars
     Point( char row, int column ) { 
         row_ = ( toupper(row) - 65 ); // wandelt Buchstabe zu Zahl um
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
     
       
    // Stream Output Function    

    friend std::ostream& operator<< (std::ostream& stream, const Point& point) {
        int row=point.row_+65;
        stream << char(row) << point.column_;
        
        return stream;
    }
/*

    friend std::istream& operator>>(std::istream& stream, Point& point) { 
       stream >> point.row_;
       stream >> point.column_;
       return stream;
    }
 */
 }; // end class Point
    
 // Definition Ein-/Ausgabeoperator

#endif	/* POINT_H */