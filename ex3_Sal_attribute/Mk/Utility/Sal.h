//
// Created by Minkyeu Kim on 12/13/23.
//

#ifndef EX1_ASSERTION_SAL_H
#define EX1_ASSERTION_SAL_H

#include "Predef.h"

// https://github.com/tpn/winsdk-10/blob/master/Include/10.0.10240.0/shared/sal.h
// https://learn.microsoft.com/en-us/archive/blogs/michael_howard/a-brief-introduction-to-the-standard-annotation-language-sal
// https://learn.microsoft.com/en-us/cpp/code-quality/understanding-sal?view=msvc-170
// MSVC를 쓰지 않아도 Microsoft source-code annotation language (SAL)를 활용하기 위한 헤더.

// Microsoft source-code annotation language
// ------------------------------------------------
#if (defined(MK_COMPILER_MSVC)) || \
    (defined(__has_include) && __has_include(<sal.h>))
    #include <sal.h>
#else
    #include "No_sal2.h" // define만 되어 있고, 구현은 안되어있는 대체용 헤더.
#endif

// 추가적인 annotation
#define _Check_return_void_

#endif //EX1_ASSERTION_SAL_H
