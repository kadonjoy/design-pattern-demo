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
#include "CrashContext.h"

using namespace std;
using namespace oodDesignPattern;

/*
 * 输入的参数目前只能是:
 * "0.8 discount"
 * "300 return 100"
 * */
int main(int argc, const char *argv[]) {
    CrashContext * m_crashcontext = NULL;
    if (argc >= 2) {
        cout << "输入的参数是: " << argv[1] << endl;
        m_crashcontext = new CrashContext(argv[1]);
    } else {
        m_crashcontext = new CrashContext();
    }

    if (m_crashcontext != NULL) {
       cout << "优惠之后的总价: " << m_crashcontext->getResult(500) << endl;
    }

    if (m_crashcontext != NULL) {
        delete m_crashcontext;
    }

    return 0;
}

/********************************** END **********************************************/

