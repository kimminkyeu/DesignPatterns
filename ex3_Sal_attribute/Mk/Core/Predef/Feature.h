//
// Created by USER on 2023-12-16.
//

#ifndef EX1_ASSERTION_FEATURE_H
#define EX1_ASSERTION_FEATURE_H

#include "Language.h"

// [ Deprecation macro ]
// Deprecations warnings are always enabled, except when users explicitly opt-out
// by defining MK_DISABLE_DEPRECATION_WARNINGS.
// ---------------------------------------------------------------------------------------------
#if !defined(MK_DISABLE_DEPRECATION_WARNINGS)
    #if __has_attribute(deprecated)
        #define MK_DEPRECATED __attribute__ ((deprecated))
    #elif MK_CPP_VER > 11
        #define MK_DEPRECATED [[deprecated]]
    #else
        #define MK_DEPRECATED
    #endif
#else
    #define MK_DEPRECATED
#endif

#if ( 11 <= MK_CPP_VER)
    #define MK_HAS_NOEXCEPT
#endif

#if defined(MK_HAS_NOEXCEPT)
    #define MK_NOEXCEPT noexcept
    #define MK_NOEXCEPT_(x) noexcept(x)
#else
    #define MK_NOEXCEPT throw()
    #define MK_NOEXCEPT_(x) // just for noexcept(x). does nothing in C++98 version
#endif

#if (14 < MK_CPP_VER) && defined(MK_COMPILER_CLANG) && (__has_cpp_attribute(fallthrough))
    #define MK_FALLTHROUGH()	[[fallthrough]]
#elif __has_cpp_attribute(clang::fallthrough)
    #define MK_FALLTHROUGH()	[[clang::fallthrough]]
#elif ( __has_attribute(fallthrough) || (700 <= _GNUC_VER) )
    #define MK_FALLTHROUGH()	__attribute__((__fallthrough__))
#else
    #define MK_FALLTHROUGH() ((void)0)
#endif

#endif //EX1_ASSERTION_FEATURE_H