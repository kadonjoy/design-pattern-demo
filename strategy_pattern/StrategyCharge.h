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

class CashNormal : public StrategyCharge {
public:
    CashNormal() {};
    ~CashNormal() {};
    double calculateTotalResult(double total) {
        return total;
    }
}; /* class CashNormal */

class CashDiscount : public StrategyCharge {
public:
    CashDiscount(double rate = 1.0) : mDiscountRate(rate) { };
    ~CashDiscount() {};
    double calculateTotalResult(double total) {
        double result = total;
        result = total * mDiscountRate;
        return result;
    }
private:
    double mDiscountRate;
}; /* class CashDiscount */

class CashReturn : public StrategyCharge {
public:
    CashReturn(double totalValue, double returnValue = 0.0) {
       mTotal = totalValue;
       mReturn = returnValue;
    };
    ~CashReturn() {};
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
}; /* class CashReturn */

} /* namespace oodDesignPattern */

#endif /*STRATEGYCHARGE_H_INCLUDED*/

/********************************** END **********************************************/

