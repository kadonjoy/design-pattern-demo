/*
 **************************************************************************************
 *       Filename:  CashContext.h
 *    Description:   header file
 *
 *        Version:  1.0
 *        Created:  2017-01-04 17:08:51
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */

#ifndef CashCONTEXT_H_INCLUDED
#define CashCONTEXT_H_INCLUDED

#include <iostream>
#include "StrategyCharge.h"

using namespace std;

namespace oodDesignPattern {
class CashContext {
public:
    CashContext(string strategy = "normal");
    ~CashContext();
    double getResult(double total);

private:
    StrategyCharge * mStrategyCharge;

};/* class CashContext  */

/* 这个地方用到简单工厂模式，所以这个例子是策略模式＋简单工厂结合 */
CashContext::CashContext(string strategy) {
    if (strategy == "0.8 discount") {
        mStrategyCharge = new CashDiscount(0.8);
    } else if (strategy == "300 return 100") {
        mStrategyCharge = new CashReturn(300, 100);
    } else {
        mStrategyCharge = new CashNormal();
    }
}

CashContext::~CashContext() {
    if (mStrategyCharge != NULL) {
        delete mStrategyCharge;
        mStrategyCharge = NULL;
    }
}

double CashContext::getResult(double total) {
    double result = 0.0f;
    if (mStrategyCharge != NULL) {
        result = mStrategyCharge->calculateTotalResult(total);
    }
    return result;
}

} /*  namespace oodDesignPattern   */

#endif /*CashCONTEXT_H_INCLUDED*/

/********************************** END **********************************************/

