//
// Created by Minkyeu Kim on 12/13/23.
//

#ifndef EX1_ASSERTION_CONFIGUTATION_H
#define EX1_ASSERTION_CONFIGUTATION_H

#include <cassert>

// TODO: import spdlog lib, implement logger, then compile to static-library...?

																	// condition이 bool이 아니라면?
//#define __MK_ASSERT_IMPL( author, condition, msg )			{ assert((static_cast<bool>(condition)) && logMessage ) }
#define __MK_ASSERT_IMPL( author, condition, msg )			( author ## msg )
#define __MK_CONCAT(x,y,z)	( x ## y ## z )
#define __MK_ASSERT_IMPL2(condition, assertMsg)			( if (static_cast<bool>(condition)) { assert(0 && #assertMsg) }  )

// #define __MK_ASSERT_PARAM	( author, condition, msg )
#if defined ( MODE_DEBUG )
//    #define MK_ASSERT_DEBUG 		( author, condition, msg )			__MK_ASSERT_IMPL( condition, #author, #msg )
//    #define MK_ASSERT_RELEASE	( author, condition, msg )			__MK_ASSERT_IMPL( condition, #author, #msg )
//    #define MK_ASSERT_MUST 		( author, condition, msg )			__MK_ASSERT_IMPL( condition, #author, #msg )
#elif defined ( MODE_RELEASE )
//	#define MK_ASSERT_DEBUG 		( author, condition, msg )			void*(0)
//    #define MK_ASSERT_RELEASE 	( author, condition, msg )			__MK_ASSERT_IMPL( condition, #author, #msg )
//    #define MK_ASSERT_MUST 		( author, condition, msg )			__MK_ASSERT_IMPL( condition, #author, #msg )
#else
//	#define MK_ASSERT_DEBUG( author, condition, msg )		void*(0)
//	#define MK_ASSERT_RELEASE( author, condition, msg )		void*(0)
//	#define MK_ASSERT_MUST( author, condition, msg )			__MK_ASSERT_IMPL( author, condition, msg )
	#define MK_ASSERT_TEST( author, condition, msg )			__MK_ASSERT_IMPL2( condition, __MK_CONCAT( author, " : ", msg ) )
#endif

#endif //EX1_ASSERTION_CONFIGUTATION_H
