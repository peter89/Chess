/* 
 * File:   LinkList.h
 * Author: JenLaptop
 *
 * Created on 10. April 2014, 08:46
 */

#ifndef LINKLIST_H
#define	LINKLIST_H

#include "Point.h"
#include "ChessFigure.h"

//typedef ChessFigure elemType;

//typedef char dataType;
typedef ChessFigure elemType;
//class elemType {
//    private:
//             dataType data_;
//             Point    loc_;
//     public:             
//             elemType() : loc_(), data_('-'){}
//             elemType(Point location, dataType data) : loc_(location), data_(data){}
//            
//             Point getLocation() const { return loc_; }
//             dataType getData() const { return data_; }
//             void setLocation(Point point){loc_=point;}
//             void setData(dataType data){data_=data;}
//             

// };

class LinkList {
public:
    class LinkNode {
        public:

            LinkNode(){}
            LinkNode(elemType Typ, LinkNode* next) : element_(Typ), next_(next){}

            virtual ~LinkNode(){}

            elemType getElem(){return element_;} 
            LinkNode* getNext(){return next_;}
            void setElem( elemType e ){ element_= e;}   
            void setNext(LinkNode* n){next_= n;}

        private:
            elemType element_;
            LinkNode* next_;
        };
    
    LinkList(): firstElement_(NULL), size_(0){}
    virtual ~LinkList();
    
    void insert(elemType e);
    bool clear(elemType e);
    LinkNode* search_for(elemType e); 
    LinkNode* search_for( Point p );
    int getSize(){return size_;}
    void print() const;
    

    iterator begin();
    iterator end();

    
private:
    LinkNode* firstElement_;
    int size_;
  

};

#endif	/* LINKLIST_H */

