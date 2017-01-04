/*
 **************************************************************************************
 *       Filename:  Operation.h
 *    Description:   header file
 *
 *        Version:  1.0
 *        Created:  2017-01-04 12:20:01
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */

#ifndef OPERATION_H_INCLUDED
#define OPERATION_H_INCLUDED

#include <iostream>

using namespace std;

namespace oodDesignPattern {
class OperationAdd;
class Operation {
public:
    Operation(double a1 = 0.0, double a2 = 0.0) :
        arg1(a1),
        arg2(a2) { }
    virtual ~Operation() { };
    virtual double getResult() = 0;

    double arg1;
    double arg2;
}; /* class Operation */

} // namespace ood-design-pattern

#endif /*OPERATION_H_INCLUDED*/

/********************************** END **********************************************/
