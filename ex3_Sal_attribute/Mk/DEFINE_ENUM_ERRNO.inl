//
// Created by USER on 2023-12-17.
//

#ifndef EX3_SAL_ATTRIBUTE_DEFINE_ENUM_ERRNO_INL
#define EX3_SAL_ATTRIBUTE_DEFINE_ENUM_ERRNO_INL

#include <cstdint>      // alias like uint32_t
//#define MK_CONTINUE_ENUM_AFTER(prevEnumClass)  __PrevCount = (static_cast<uint32_t>(prevEnumClass_Count) - 1),

enum eErrNoFirstGroup : uint8_t // max 256
{
    eErrNoFirstGroup_A = 0,
    eErrNoFirstGroup_B,
    eErrNoFirstGroup_C,

    eErrNoFirstGroup_Count
};

enum eErrNoSecondGroup : uint8_t // max 256
{
    eErrNoSecondGroup_A = eErrNoFirstGroup_Count,  // 3 := "아이템 슬롯이 비정상 입니다."
    eErrNoSecondGroup_B,  // 4
    eErrNoSecondGroup_C,  // 5

    eErrNoSecondGroup_Count
};


#endif //EX3_SAL_ATTRIBUTE_DEFINE_ENUM_ERRNO_INL
