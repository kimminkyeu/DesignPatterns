//
// Created by USER on 2023-12-16.
//

#ifndef EX1_ASSERTION_NAMESPACE_H
#define EX1_ASSERTION_NAMESPACE_H

// * handle namespace of library (ex. MK::vector, MK::map)
#define MK_BEGIN_GLOBAL_NAMESPACE       namespace MK {
#define MK_END_GLOBAL_NAMESPACE         }

// * namespace for internal helper function call ( not for API )
//   - you can access helper functions by calling mk::_PRIVATE::foo()
#define MK_BEGIN_PRIVATE_NAMESPACE      FT_BEGIN_GLOBAL_NAMESPACE namespace _PRIVATE {
#define MK_END_PRIVATE_NAMESPACE        } }

#endif //EX1_ASSERTION_NAMESPACE_H
