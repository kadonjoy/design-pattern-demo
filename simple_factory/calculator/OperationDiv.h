/*
 **************************************************************************************
 *       Filename:  OperationDiv.h
 *    Description:   header file
 *
 *        Version:  1.0
 *        Created:  2017-01-04 13:21:00
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */

#ifndef OPERATIONDIV_H_INCLUDED
#define OPERATIONDIV_H_INCLUDED

#include "Operation.h"

namespace oodDesignPattern {
class OperationDiv : public Operation {
public:
    OperationDiv (double a1, double a2) :
        Operation (a1, a2) { }
    ~OperationDiv () { }
    double getResult () {

        double result = 0.0;
        if (arg2 == 0.0) {
            cout << "除数为0，请重新输入正确的除数" << endl;
            return result;
        }
        /* '/'在计算double数据是为除法，整形计算是为取整 */
        result = arg1 / arg2;

        return result;
    } 
};

} // namespace ood-design-pattern

#endif /*OPERATIONDIV_H_INCLUDED*/

/********************************** END **********************************************/

