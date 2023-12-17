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
            // NOTE: SymNo32는 0 ~ 4,294,967,295 의 범위를 가집니다.
private:    uint32_t _raw_;

public:     explicit SymNo32(uint32_t raw_no);
public:     SymNo32(const SymNo32& other);
public:     SymNo32& operator = (const SymNo32& other);

public:     _Check_return_ uint32_t GetRaw() const noexcept;
private:    _Check_return_void_ void SetRaw(uint32_t raw_no) noexcept;

public:     _Must_inspect_result_ bool IsFailed() const noexcept;
public:     _Check_return_ const std::string GetSymbolString() const noexcept; // SymNo32의 _noRaw에 대응하는 에러 문자열을 출력.

public:     template<typename input_enum_type>
            _Check_return_void_ void Set(input_enum_type e)
            {
                typedef std::underlying_type_t<input_enum_type> enum_base_type;
                typedef decltype(_raw_) symNo_base_type; // typeid는 runtime, decltype은 compileTime.
                MK_ASSERT_COMPILE("김민규", (true == std::is_enum_v<input_enum_type>), "Set 함수에 전달된 인자는 타입이 enum이여야 합니다.");
                MK_ASSERT_COMPILE("김민규", (sizeof(enum_base_type) <= sizeof(symNo_base_type)), "SymNo32의 최대값보다 큰 enum은 들어올 수 없습니다.");

                _raw_ = static_cast<symNo_base_type>(e);
            }
};

#endif //EX3_SAL_ATTRIBUTE_SYMNO32_H
