/*
 * File:   UnitTesting.cpp
 * Author: humm
 *
 * Created on 11. März 2010, 16:54
 */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string toString(int i) {
    stringstream stringSteam;
    stringSteam << i;
    return stringSteam.str();
}

string toString(float f) {
    stringstream stringSteam;
    stringSteam << f;
    return stringSteam.str();
}

void notifyTestResult(bool successful, string testType, string description, string expected, string actual) {
    if (successful)
        cout << "Test " << testType << " " << description << " successful: " << actual << endl;
    else
        cout << "FAILURE in test " << testType << " " << description << "! Expected: " << expected << " Actual: " << actual << endl;
}


void notifyTestResult(bool successful, string testType, string description) {
    if (successful)
        cout << "Test " << testType << " " << description << " successful." << endl;
    else
        cout << "FAILURE in test " << testType << " " << description << "!" << endl;
}

//template <class T>
//void testEquals(T expected, T actual, string description) {
//    notifyTestResult(expected == actual, "assertEquals", description, toString(expected), toString(actual));
//}


void assertEquals(int expected, int actual, string description) {
    notifyTestResult(expected == actual, "assertEquals", description, toString(expected), toString(actual));
}

void assertEquals(float expected, float actual, float precision, string description) {
    float difference;

    difference = (expected >= actual) ? (expected - actual) : (actual - expected);
    notifyTestResult(difference <= precision, "assertEquals", description, toString(expected), toString(actual));
}

void assertEquals(string expected, string actual, string description) {
    notifyTestResult(expected.compare(actual) == 0 , "assertEquals", description, expected, actual);
}

void assertTrue(bool condition, string description) {
    notifyTestResult(condition , "assertTrue", description);
}









