//
// Created by Minkyeu Kim on 12/13/23.
//

#ifndef EX1_ASSERTION_SAL_H
#define EX1_ASSERTION_SAL_H

#include "Predef.h"

// Microsoft source-code annotation language
// ------------------------------------------------
// MSVC를 쓰지 않아도 Microsoft source-code annotation language (SAL)를 활용하기 위한 헤더.
// https://github.com/tpn/winsdk-10/blob/master/Include/10.0.10240.0/shared/sal.h
// https://learn.microsoft.com/en-us/archive/blogs/michael_howard/a-brief-introduction-to-the-standard-annotation-language-sal
// https://learn.microsoft.com/en-us/cpp/code-quality/understanding-sal?view=msvc-170

#if (defined(MK_COMPILER_MSVC)) || \
    (defined(__has_include) && __has_include(<sal.h>))
    #include <sal.h>
#else
    #include "No_sal2.h" // MS Sal과 동일하게 define 되어 있고, 구현은 안되어있는 대체 헤더.
#endif

// MS Sal에 없는 추가 Annotation 정의.
// https://en.cppreference.com/w/cpp/language/attributes
// ------------------------------------
#ifdef _Check_return_void_
#   undef _Check_return_void_
#endif
#define _Check_return_void_

// ------------------------------------
#ifdef _Deprecated_
#   undef _Deprecated_
#endif
#ifdef _Deprecated__
#   undef _Deprecated__
#endif
#if __has_attribute(deprecated)
#   if (11 < MK_CPP_VER)
#       define _Deprecated_                     [[deprecated]]
#       define _Deprecated__(reason_string)     [[deprecated(reason_string)]]
#   else
#       define _Deprecated_                     __attribute__ ((deprecated))
#       define _Deprecated__(reason_string)     __attribute__ ((deprecated(reason_string)))
#   endif
#else
#   define _Deprecated_
#   define _Deprecated__(reason_string)
#endif

// ------------------------------------
#ifdef _Fallthrough_
#   undef _Fallthrough_
#endif
#if (__has_cpp_attribute(fallthrough))
#   if (14 < MK_CPP_VER)
#       define _Fallthrough_        [[fallthrough]]
#   else
#       define _Fallthrough_        __attribute__((__fallthrough__))
#   endif
#else
#   define _Fallthrough_
#endif

#endif //EX1_ASSERTION_SAL_H
