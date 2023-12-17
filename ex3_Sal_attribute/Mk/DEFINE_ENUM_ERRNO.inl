//
// Created by USER on 2023-12-17.
//

#ifndef EX3_SAL_ATTRIBUTE_DEFINE_ENUM_ERRNO_INL
#define EX3_SAL_ATTRIBUTE_DEFINE_ENUM_ERRNO_INL

#include <cstdint>      // alias like uint32_t

// NOTE: (1) 이렇게 하면 __PrevCount는 enum 자동완성에 표시되지 않는다. 좋은데... 왜 안뜨지?
//       (2) 일단 cast 최대 크기인 uint64_t로 잡았다.
#define MK_CONTINUE_ENUM_AFTER(prevEnumClass)  __PrevCount = (static_cast<uint32_t>(prevEnumClass::Count) - 1),

enum class eErrNoFirstGroupExample : uint8_t // max 256
{
    A = 0,
    B,
    C,
    Count
};

enum class eErrNoSecondGroupExample : uint8_t // max 256
{
    MK_CONTINUE_ENUM_AFTER(eErrNoFirstGroupExample)
    A,  // 3 -> "아이템 슬롯이 비정상 입니다."
    B,  // 4
    C,  // 5
    Count
};


#endif //EX3_SAL_ATTRIBUTE_DEFINE_ENUM_ERRNO_INL
