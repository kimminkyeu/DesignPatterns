//
// Created by 김민규 on 2022/12/28.
//

#ifndef EX1_ASSERTION_CONFIG_H
#define EX1_ASSERTION_CONFIG_H

// for printing color ascii...
// ---------------------------------------------------------------------------------------------
#define PRINT_RED     "\x1b[31m"
#define PRINT_GREEN   "\x1b[32m"
#define PRINT_YELLOW  "\x1b[33m"
#define PRINT_BLUE    "\x1b[34m"
#define PRINT_MAGENTA "\x1b[35m"
#define PRINT_CYAN    "\x1b[36m"
#define PRINT_RESET   "\x1b[0m"

// ---------------------------------------------------------------------------------------------
// 하단의 내용은 llvm __config 파일 내용을 참고하여 작성하였습니다.
// https://libcxx.llvm.org/DesignDocs/VisibilityMacros.html

// ---------------------------------------------------------------------------------------------
// * handle namespace of library (ex. MK::vector, MK::map)
//#define MK_BEGIN_GLOBAL_NAMESPACE       namespace MK {
//#define MK_END_GLOBAL_NAMESPACE         }

// * namespace for internal helper function call ( not for API )
//   - you can access helper functions by calling mk::_PRIVATE::foo()
#define MK_BEGIN_PRIVATE_NAMESPACE      FT_BEGIN_GLOBAL_NAMESPACE namespace _PRIVATE {
#define MK_END_PRIVATE_NAMESPACE        } }

//  * C++ version defined macro */
// ---------------------------------------------------------------------------------------------
#ifdef __cplusplus
# ifndef MK_CPP_VER
#  if   __cplusplus <= 199711L
#   define MK_CPP_VER 1 // C++98
#  elif  __cplusplus <= 201103L
#    define MK_CPP_VER 11
#  elif __cplusplus <= 201402L
#    define MK_CPP_VER 14
#  elif __cplusplus <= 201703L
#    define MK_CPP_VER 17
#  elif __cplusplus <= 202002L
#    define MK_CPP_VER 20
#  else
#    define MK_CPP_VER 21  // current year, or date of c++2b ratification
#  endif
# endif  // MK_CPP_VER
#endif // __cplusplus


// * Deprecation macros.
// Deprecations warnings are always enabled, except when users explicitly opt-out
// by defining MK_DISABLE_DEPRECATION_WARNINGS.
// ---------------------------------------------------------------------------------------------
#if !defined(MK_DISABLE_DEPRECATION_WARNINGS)
#  if __has_attribute(deprecated)
#    define MK_DEPRECATED __attribute__ ((deprecated))
#  elif MK_STD_VER > 11
#    define MK_DEPRECATED [[deprecated]]
#  else
#    define MK_DEPRECATED
#  endif
#else
#  define MK_DEPRECATED
#endif

// Because C++98 has no "noexcept" keyword ...
// ---------------------------------------------------------------------------------------------
#if ( 11 <= __cplusplus)
#  define MK_HAS_NOEXCEPT
#endif

#ifndef MK_HAS_NOEXCEPT
#  define NOEXCEPT noexcept
#  define NOEXCEPT_(x) noexcept(x)
#else
#  define NOEXCEPT throw()
#  define NOEXCEPT_(x) // just for noexcept(x). does nothing in C++98 version
#endif

// * Fallthrough macro in Switch-Case
// Use a function like macro to imply that it must be followed by a semicolon
// ---------------------------------------------------------------------------------------------
#if (14 < __cplusplus) && (__has_cpp_attribute(fallthrough))
#  define MK_FALLTHROUGH()	[[fallthrough]]
#elif __has_cpp_attribute(clang::fallthrough)
#  define MK_FALLTHROUGH()	[[clang::fallthrough]]
#elif ( __has_attribute(fallthrough) || (700 <= _GNUC_VER) )
#  define MK_FALLTHROUGH()	__attribute__((__fallthrough__))
#else
#  define MK_FALLTHROUGH() ((void)0)
#endif

#endif //EX1_ASSERTION_CONFIG_H
