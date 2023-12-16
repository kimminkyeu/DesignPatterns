//
// Created by USER on 2023-12-16.
//

#ifndef EX1_ASSERTION_CPPVERSION_H
#define EX1_ASSERTION_CPPVERSION_H

//  * C++ version defined macro */
// ---------------------------------------------------------------------------------------------
// MK_CPP_VER

// ---------------------------------------------------------------------------------------------
#ifdef __cplusplus
    #ifdef MK_CPP_VER
        #undef MK_CPP_VER
    #endif
    #if   __cplusplus <= 199711L
        #define MK_CPP_VER 1 // C++98
    #elif  __cplusplus <= 201103L
        #define MK_CPP_VER 11
    #elif __cplusplus <= 201402L
        #define MK_CPP_VER 14
    #elif __cplusplus <= 201703L
        #define MK_CPP_VER 17
    #elif __cplusplus <= 202002L
        #define MK_CPP_VER 20
    #else
        #define MK_CPP_VER 21
    #endif
#else
    // ... c language ....
#endif // __cplusplus

#endif //EX1_ASSERTION_CPPVERSION_H
