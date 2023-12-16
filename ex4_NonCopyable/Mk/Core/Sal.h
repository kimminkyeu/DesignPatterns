//
// Created by Minkyeu Kim on 12/13/23.
//

#ifndef EX1_ASSERTION_SAL_H
#define EX1_ASSERTION_SAL_H

#include "Predef.h"

// https://github.com/tpn/winsdk-10/blob/master/Include/10.0.10240.0/shared/sal.h
// MSVC를 쓰지 않아도 Microsoft source-code annotation language (SAL)를 활용하기 위한 헤더.

#if defined(MK_COMPILER_MSVC)
    #include <sal.h>
#elif defined(__has_include)
    #if __has_include(<sal.h>)
        #include <sal.h>
    #endif
#else
    #include "No_sal2.h"
#endif

#endif //EX1_ASSERTION_SAL_H
