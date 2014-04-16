/* 
 * File:   LinkList.h
 * Author: JenLaptop
 *
 * Created on 10. April 2014, 08:46
 */

#ifndef LINKLIST_H
#define	LINKLIST_H

#include "Point.h"
#include "LinkNode.h"

class LinkList {
public:
    
    LinkList();
    virtual ~LinkList();
    
    void insert(Point p, char figure);
    LinkNode* getLinkNode(Point p);
    bool move(Point from,Point to);
    bool isElementThere(Point p);
    bool clear(Point p);
    
    int getSize(){
        return size_;
    }
    
private:
    LinkNode* firstElement_;
    int size_;
    LinkNode* getLinkNodeHP(Point p);
    

};

#endif	/* LINKLIST_H */

