/*
 **************************************************************************************
 *       Filename:  OperationFactory.h
 *    Description:  简单工厂模式demo
 *
 *        Version:  1.0
 *        Created:  2017-01-04 14:19:20
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */

#ifndef OPERATIONFACTORY_H_INCLUDED
#define OPERATIONFACTORY_H_INCLUDED
#include "Operation.h"
#include "OperationAdd.h"
#include "OperationDiv.h"

namespace oodDesignPattern {
class OperationFactory {
public:
    OperationFactory();
    ~OperationFactory();
    static Operation * createOperation(string operatorChar, double arg1, double arg2) {
        Operation * m_operation = NULL;
        if (operatorChar == "+") {
            m_operation = new OperationAdd(arg1, arg2);
        } else if (operatorChar == "/") {
            m_operation = new OperationDiv(arg1, arg2);
        } else {
            cout << " is invalid operator" << operatorChar << endl; 
        }

        return m_operation;
    }
}; /* class OperationFactory */
} /* namespace oodDesignPattern */
#endif /*OPERATIONFACTORY_H_INCLUDED*/

/********************************** END **********************************************/

