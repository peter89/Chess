/* 
 * File:   LinkList.cpp
 * Author: JenLaptop
 * 
 * Created on 10. April 2014, 08:46
 */

#include <cstdlib>
#include <ctype.h>
#include <iostream>
#include "LinkList.h"

LinkList::~LinkList() {
}


void LinkList::insert(elemType e){
    LinkNode* node = search_for(e.getLocation());
 
    if( NULL != node) {
        node->setElem(e);
    }
    else{
        firstElement_ = new LinkNode(e, firstElement_);
        size_++;
    }
}


bool LinkList::clear(elemType e){ //löscht Figur wenn sie gleiche Position wie Parameterfigur besitzt
     LinkNode* prev = firstElement_;
     LinkNode* node = firstElement_;
    for (int i=0; i <size_; i++){
     if(node->getElem().getLocation() == e.getLocation()){
        prev->setNext(node->getNext());
        delete node;
        size_--;
        return true;
     }
      prev = node;
      node = node->getNext();
    }
     return false;
}

LinkList::LinkNode* LinkList::search_for (elemType e){
    LinkNode* node = firstElement_;
    for (int i=0; i <size_; i++){
        if(node->getElem()== e){
            return node;
        }

      node = node->getNext();
    }
    return NULL;
}

LinkList::LinkNode* LinkList::search_for(Point p){
    for ( LinkNode* node = firstElement_; node != nullptr; node = node->getNext() )
     if ( p == node->getElem().getLocation() )  return node;
    
    return NULL;
}

void LinkList::print() const {
    std::cout << "list {" << std::endl;
    for ( LinkNode* node = firstElement_; node != nullptr; node = node->getNext()) {
        std::cout << node->getElem().getType();
        std::cout << " at " << node->getElem().getLocation() << std::endl;
    }   
    std::cout << "  };";
}

//LinkNode* LinkList::getLinkNodeHP(Point p){
//     if (firstElement_==NULL) return NULL;
//    LinkNode* element = firstElement_;
//    
//    for (int i=0; i<size_;i++){
//        
//        if (element->getPoint()==p) return element;
//        
//        if (element->getNext()!=NULL){
//            element=element->getNext();
//        }
//        else return NULL;
//    }
//} 
