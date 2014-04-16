/* 
 * File:   LinkList.cpp
 * Author: JenLaptop
 * 
 * Created on 10. April 2014, 08:46
 */

#include "LinkList.h"
#include <cstdlib>
#include <ctype.h>

LinkList::LinkList() {
    firstElement_=0;
    size_=0;
}

LinkList::~LinkList() {
}


void LinkList::insert(Point p, char figure){
    firstElement_ = new LinkNode(p, figure, firstElement_);
    ++size_;
}
    
LinkNode* LinkList::getLinkNode(Point p){
   if(getLinkNodeHP(p)==NULL){
       return new LinkNode(p,'-', NULL);
   }
   else
       return getLinkNodeHP(p);
}

LinkNode* LinkList::getLinkNodeHP(Point p){
     if (firstElement_==NULL) return NULL;
    LinkNode* element = firstElement_;
    
    for (int i=0; i<size_;i++){
        
        if (element->getPoint()==p) return element;
        
        if (element->getNext()!=NULL){
            element=element->getNext();
        }
        else return NULL;
    }
}
    

bool LinkList::move(Point from,Point to){
    if ( ! isElementThere(from) ) return false;
    
    //zug erlaubt?
    //getElement(from)->Symbol_
            
    if ( isElementThere(to) ){
        //Wenn gleiche farbe
        if(isupper( getLinkNode(from)->getElem()) == isupper( getLinkNode(to)->getElem() )) return false;
        clear(to);
    }
    
    getLinkNode(from)->setPoint(to);
    return true;
}
    

bool LinkList::isElementThere(Point p){
    return (getLinkNodeHP(p)!=NULL)? true:false;
}
    
bool LinkList::clear(Point p){
    
    if (firstElement_->getPoint() == p)
    {
        firstElement_->setNext(firstElement_->getNext());
        --size_;
        return true;
    }

    LinkNode* prev = firstElement_;
    LinkNode* current = firstElement_;
    
    for (int i=0; i<size_;i++)
    {
        if (current->getPoint() != p)         // if value not found
        {
            if (current->getNext()!=NULL)       // if the next element is not empty
            {   
                prev=current;                   // new prev 
                current=current->getNext();     // new current
            }
            else                                // if next is empty
                return false;                   // value not found
        }
        else                                    // if value is found
        {
            prev->setNext(current->getNext());       // set prev to new next
            delete current;                             // delete current
            --size_;                                    // dekrement size_
            return true;                                // return true
        }
    }
    
}