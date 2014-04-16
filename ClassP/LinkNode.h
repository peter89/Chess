/* 
 * File:   LinkNode.h
 * Author: JenLaptop
 *
 * Created on 10. April 2014, 08:52
 */

#ifndef LINKNODE_H
#define	LINKNODE_H

#include "Point.h"
#include <cstdlib>

class LinkNode {
public:
    typedef char elemTyp;
    
    LinkNode();
    LinkNode(Point point, elemTyp Typ, LinkNode* next) : element_(Typ), point_(point), next_(next){};
    LinkNode(const LinkNode& orig);
    
    virtual ~LinkNode();
    
    elemTyp getElem(){
        return element_;
    }
    
    Point getPoint(){
        return point_;
    }
    
    LinkNode* getNext(){
        return next_;
    }
    
    void setElem( elemTyp e ){
        element_=e;
    }
    
    void setPoint(Point p){
        point_=p;
    }
    
    void setNext(LinkNode* n){
        next_=n;
    }
    
    
private:
    elemTyp element_;
    Point point_;
    //bool elmentThere_;
    LinkNode* next_;
    LinkNode* prev_;
};

#endif	/* LINKNODE_H */

