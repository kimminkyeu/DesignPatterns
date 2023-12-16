//
// Created by USER on 2023-12-17.
//

#ifndef EX3_SAL_ATTRIBUTE_SYMNO32_H
#define EX3_SAL_ATTRIBUTE_SYMNO32_H

#include <cstdint>      // uint32_t 같은 타입 include
#include <type_traits>  // for SymNo32.
#include <string>       // for SymNo32

#include "Mk/Utility.h"

class SymNo32 : private MK::Copyable
{
private: uint32_t _raw_;

public: explicit SymNo32(uint32_t raw_no);
public: SymNo32(const SymNo32& other);
public: SymNo32& operator = (const SymNo32& other);

public: _Check_return_ uint32_t GetRaw() const noexcept;
private:_Check_return_void_ void SetRaw(uint32_t raw_no) noexcept;
public: _Must_inspect_result_ bool IsFailed() const noexcept;
public: _Check_return_ const std::string GetSymbolString() const noexcept; // SymNo32의 _noRaw에 대응하는 에러 문자열을 출력.
public:
    template<typename input_enum_type>
    _Check_return_void_ void Set(input_enum_type e)
    {
        typedef std::underlying_type_t<input_enum_type> enum_base_type;
        typedef decltype(_raw_) symNo_base_type; // typeid는 runtime, decltype은 compileTime.
        MK_ASSERT_COMPILE("김민규", (true == std::is_enum_v<input_enum_type>), "Set 함수에 전달된 인자는 타입이 enum이여야 합니다.");
        MK_ASSERT_COMPILE("김민규", (true == std::is_same_v<enum_base_type , symNo_base_type>), "SymNo32의 내부 타입과 enum 내부 타입은 같아야 합니다.");

        symNo_base_type raw = static_cast<symNo_base_type>(e);
        MK_ASSERT_DEV("김민규", 0 <= raw, "noRaw가 0보다 작을 수 없습니다!");

        _raw_ = raw;
    }
};

#endif //EX3_SAL_ATTRIBUTE_SYMNO32_H
