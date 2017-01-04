/*
 **************************************************************************************
 *       Filename:  CrashContext.h
 *    Description:   header file
 *
 *        Version:  1.0
 *        Created:  2017-01-04 17:08:51
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */

#ifndef CRASHCONTEXT_H_INCLUDED
#define CRASHCONTEXT_H_INCLUDED

#include <iostream>
#include "StrategyCharge.h"

using namespace std;

namespace oodDesignPattern {
class CrashContext {
public:
    CrashContext(string strategy = "normal");
    ~CrashContext();
    double getResult(double total);

private:
    StrategyCharge * mStrategyCharge;

};/* class CrashContext  */

CrashContext::CrashContext(string strategy) {
    if (strategy == "0.8 discount") {
        mStrategyCharge = new CrashDiscount(0.8);
    } else if (strategy == "300 return 100") {
        mStrategyCharge = new CrashReturn(300, 100);
    } else {
        mStrategyCharge = new CrashNormal();
    }
}

CrashContext::~CrashContext() {
    if (mStrategyCharge != NULL) {
        delete mStrategyCharge;
        mStrategyCharge = NULL;
    }
}

double CrashContext::getResult(double total) {
    double result = 0.0f;
    if (mStrategyCharge != NULL) {
        result = mStrategyCharge->calculateTotalResult(total);
    }
    return result;
}

} /*  namespace oodDesignPattern   */

#endif /*CRASHCONTEXT_H_INCLUDED*/

/********************************** END **********************************************/

