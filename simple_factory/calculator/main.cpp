/*
 **************************************************************************************
 *       Filename:  main.cpp
 *    Description:   source file
 *
 *        Version:  1.0
 *        Created:  2017-01-04 13:27:39
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */
#include <iostream>
#include "OperationFactory.h"

using namespace std;
using namespace oodDesignPattern;

int main(int argc, const char *argv[]) {
    cout << "Welcome to kadon's calculator!" << endl; 

    double x, y;
    cin >> x;
    cin >> y;
    Operation * mOpAdd = OperationFactory::createOperation(string("+"), x, y);
    Operation * mOpDiv = OperationFactory::createOperation(string("/"), x, y);
    
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    if (mOpAdd != NULL) {
       cout << "x + y = " << mOpAdd->getResult() << endl;
       delete mOpAdd;
    }

    if (mOpDiv != NULL) {
       cout << "x / y = " << mOpDiv->getResult() << endl;
       delete mOpDiv;
    }

    return 0;
}

/********************************** END **********************************************/

