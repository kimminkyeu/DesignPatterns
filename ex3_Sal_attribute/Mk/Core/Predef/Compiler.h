//
// Created by USER on 2023-12-16.
//

#ifndef EX1_ASSERTION_COMPILERVERSION_H
#define EX1_ASSERTION_COMPILERVERSION_H

/*
		Visual Studio       _MSC_VER
		gcc                 __GNUC__
		clang               __clang__
		emscripten          __EMSCRIPTEN__ (for asm.js and webassembly)
		MinGW 32            __MINGW32__
		MinGW-w64 32bit     __MINGW32__
		MinGW-w64 64bit     __MINGW64__
*/

#if defined(__clang__)
    #define MK_COMPILER_CLANG
#elif defined(__GNUC__) || defined(__GNUG__)
    #define MK_COMPILER_GCC
#elif defined(_MSC_VER)
    #define MK_COMPILER_MSVC
#elif defined(__MINGW32__) || defined(__MINGW64__)
	// ...
#endif

#endif //EX1_ASSERTION_COMPILERVERSION_H
