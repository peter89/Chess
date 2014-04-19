/* 
 * File:   UnitTestsMain.h
 * Author: Peter Kilian
 *
 * Created on 19. April 2014, 17:58
 */

#ifndef UNITTESTSMAIN_H
#define	UNITTESTSMAIN_H

class UnitTestsMain {
public:
    UnitTestsMain();
    UnitTestsMain(const UnitTestsMain& orig);
    virtual ~UnitTestsMain();
    
    void TestPointClass();
    void TestLinkListClass();
    void TestChessFigureClass();
    void TestBoardClass();

    
    
     
private:
   
};

#endif	/* UNITTESTSMAIN_H */

