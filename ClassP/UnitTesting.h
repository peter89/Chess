/* 
 * File:   UnitTesting.h
 * Author: humm
 *
 * Created on 15. März 2010, 18:22
 */

#include <string>


using namespace std;

#ifndef _UNITTESTING_H
#define	_UNITTESTING_H

/**
 * Tests whether actual value is equal to expected value.
 *
 * @param expected correct value
 * @param actual computed value
 * @param description (optional) testing context
 * @return void - the test result is printed to cout
**/
void assertEquals(int expected, int actual, string description = "");

/**
 * Tests whether actual value is equal to expected value or differs at most with precision.
 *
 * @param expected correct value
 * @param actual computed value
 * @param precision allowed failure tolerance
 * @param description (optional) testing context
 * @return void - the test result is printed to cout
**/
void assertEquals(float expected, float actual, float precision, string description = "");

/**
 * Tests whether actual value is equal to expected value.
 *
 * @param expected correct value
 * @param actual computed value
 * @param description (optional) testing context
 * @return void - the test result is printed to cout
**/
void assertEquals(string expected, string actual, string description = "");

/**
 * Tests a condition.
 *
 * @param condition test evaluation
 * @param description (optional) testing context
 * @return void - the test result is printed to cout
**/
void assertTrue(bool condition, string description = "");

//template <class T>
//void testEquals(T expected, T actual, string description);


#endif	/* _UNITTESTING_H */

