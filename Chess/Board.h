/* 
 * File:   Board.h
 * Author: JenLaptop
 *
 * Created on 15. April 2014, 17:40
 */

#ifndef BOARD_H
#define	BOARD_H

#include "LinkList.h"

class Board {
public:
    Board();
    Board(const Board& orig);
    virtual ~Board();
    void print_board();
private:
    int width_;
    int hight_;
    LinkList board_;
    
    
};

#endif	/* BOARD_H */

