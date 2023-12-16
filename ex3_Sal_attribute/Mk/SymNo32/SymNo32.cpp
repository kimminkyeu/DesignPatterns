//
// Created by USER on 2023-12-17.
//

#include "Mk/SymNo32.h"

SymNo32::SymNo32(uint32_t raw_no) : _raw_(0)
{ SetRaw(raw_no); };

SymNo32::SymNo32(const SymNo32& other) : _raw_(0)
{
    MK_ASSERT_DEV("김민규", (this != &other), "자기 자신을 대입하고 있습니다. 이렇게 한 이유가 있나요?");
    *this = other;
};

SymNo32& SymNo32::operator=(const SymNo32& other)
{
    SetRaw(other.GetRaw());
    return *this;
};

uint32_t SymNo32::GetRaw() const noexcept
{ return _raw_; };

void SymNo32::SetRaw(uint32_t raw_no) noexcept
{
    _raw_ = raw_no;
}

bool SymNo32::IsFailed() const noexcept
{ return (0 != _raw_); };

const std::string SymNo32::GetSymbolString() const noexcept
{
    // NOTE: 사전에 정의된 Error 심볼 테이블을 참조해서, 해당 enum과 1대1로 대응되는 에러 메시지를 출력합니다.
    //       나중에 Runtime에서 오류 메시지를 GUI에 띄워줄 때, 이 메시지를 띄워 줍니다. (ex. Base/SymbolTable.mk)
    //       지금은 구현 테스트를 위해 간단히 메시지를 반환하겠습니다.
    return "심볼 메시지 테스트입니다";
}
