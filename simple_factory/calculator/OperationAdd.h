/*
 **************************************************************************************
 *       Filename:  OperationAdd.h
 *    Description:   header file
 *
 *        Version:  1.0
 *        Created:  2017-01-04 13:21:00
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */

#ifndef OPERATIONADD_H_INCLUDED
#define OPERATIONADD_H_INCLUDED

#include "Operation.h"

namespace oodDesignPattern {
class OperationAdd : public Operation {
public:
    OperationAdd (double a1, double a2) :
        Operation (a1, a2) { }
    ~OperationAdd() { }
    double getResult() {
        return arg1 + arg2;
    } 
};

} // namespace ood-design-pattern

#endif /*OPERATIONADD_H_INCLUDED*/

/********************************** END **********************************************/

