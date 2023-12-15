//
// Created by Minkyeu Kim on 12/13/23.
//

#pragma once
#ifndef EX1_ASSERTION_CONFIGUTATION_H
#define EX1_ASSERTION_CONFIGUTATION_H

#include <cassert>

#define MK_ASSERT_COMPILE( developer, expr, formatString )				static_assert(expr, "[ " developer " : " formatString " ]")

#define __MK_ASSERT_NOTE_IMPLEMENT( developer, expr, formatString )     if (false == static_cast<bool>(expr)) { fprintf(stderr, "Assertion failed: (%s)\n%s: %s\nat function %s, file %s, line %d.\n", #expr, developer, formatString, __PRETTY_FUNCTION__, __FILE__, __LINE__); abort(); }
#if defined ( MK_DEBUG )
	#define MK_ASSERT_NOTE( developer, expr, formatString )				__MK_ASSERT_NOTE_IMPLEMENT( developer, expr, formatString )
	#define MK_ASSERT_DEBUG( developer, expr, formatString )			__MK_ASSERT_NOTE_IMPLEMENT( developer, expr, formatString )
	#define MK_ASSERT_DEV( developer, expr, formatString )				__MK_ASSERT_NOTE_IMPLEMENT( developer, expr, formatString )
	#define MK_ASSERT_MUST( developer, expr, formatString )				__MK_ASSERT_NOTE_IMPLEMENT( developer, expr, formatString )
#elif defined ( MK_DEV )
	#define MK_ASSERT_DEBUG( developer, expr, formatString )			((void)0)
	#define MK_ASSERT_NOTE( developer, expr, formatString )				((void)0)
	#define MK_ASSERT_DEV( developer, expr, formatString )				__MK_ASSERT_NOTE_IMPLEMENT( developer, expr, formatString )
	#define MK_ASSERT_MUST( developer, expr, formatString )				__MK_ASSERT_NOTE_IMPLEMENT( developer, expr, formatString )
#elif defined ( MK_RELEASE )
	#define MK_ASSERT_NOTE( developer, expr, formatString )				((void)0)
	#define MK_ASSERT_DEBUG( developer, expr, formatString )			((void)0)
	#define MK_ASSERT_DEV( developer, expr, formatString )				((void)0)
	#define MK_ASSERT_MUST( developer, expr, formatString )				__MK_ASSERT_NOTE_IMPLEMENT( developer, expr, formatString )
#endif

#endif //EX1_ASSERTION_CONFIGUTATION_H
