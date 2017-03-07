/*
 **************************************************************************************
 *       Filename:  main.cpp
 *    Description:   source file
 *
 *        Version:  1.0
 *        Created:  2017-01-04 17:24:05
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */
#include <iostream>
#include "CashContext.h"

using namespace std;
using namespace oodDesignPattern;

/*
 * 输入的参数目前只能是:
 * "0.8 discount"
 * "300 return 100"
 * */
int main(int argc, const char *argv[]) {
    CashContext * m_Cashcontext = NULL;
    if (argc >= 2) {
        cout << "输入的参数是: " << argv[1] << endl;
        m_Cashcontext = new CashContext(argv[1]);
    } else {
        m_Cashcontext = new CashContext();
    }

    if (m_Cashcontext != NULL) {
       cout << "优惠之后的总价: " << m_Cashcontext->getResult(500) << endl;
    }

    if (m_Cashcontext != NULL) {
        delete m_Cashcontext;
    }

    return 0;
}

/********************************** END **********************************************/

