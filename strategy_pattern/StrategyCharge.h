/*
 **************************************************************************************
 *       Filename:  StrategyCharge.h
 *    Description:   header file
 *
 *        Version:  1.0
 *        Created:  2017-01-04 16:46:50
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */

#ifndef STRATEGYCHARGE_H_INCLUDED
#define STRATEGYCHARGE_H_INCLUDED
namespace oodDesignPattern {
class StrategyCharge {
public:
    StrategyCharge() {};
    virtual ~StrategyCharge() {};
    virtual double calculateTotalResult(double total) = 0;
}; /* class StrategyCharge */

class CrashNormal : public StrategyCharge {
public:
    CrashNormal() {};
    ~CrashNormal() {};
    double calculateTotalResult(double total) {
        return total;
    }
}; /* class CrashNormal */

class CrashDiscount : public StrategyCharge {
public:
    CrashDiscount(double rate = 1.0) : mDiscountRate(rate) { };
    ~CrashDiscount() {};
    double calculateTotalResult(double total) {
        double result = total;
        result = total * mDiscountRate;
        return result;
    }
private:
    double mDiscountRate;
}; /* class CrashDiscount */

class CrashReturn : public StrategyCharge {
public:
    CrashReturn(double totalValue, double returnValue = 0.0) {
       mTotal = totalValue;
       mReturn = returnValue;
    };
    ~CrashReturn() {};
    double calculateTotalResult(double total) {
        double result = total;
        if (total >= mTotal) {
            result = total - mReturn;
        }
        return result;
    }
private:
    double mTotal;
    double mReturn;
}; /* class CrashReturn */

} /* namespace oodDesignPattern */

#endif /*STRATEGYCHARGE_H_INCLUDED*/

/********************************** END **********************************************/

