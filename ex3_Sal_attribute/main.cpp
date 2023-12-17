#include "Mk/Utility.h"
#include "Mk/SymNo32.h"
#include "Mk/DEFINE_ENUM_ERRNO.inl"

_Check_return_ SymNo32 calculate(_In_opt_ int param) noexcept;

SymNo32 calculate(int param) noexcept
{
    SymNo32 rv(0);
    if ( 1 < param )
    {
        rv.Set(eErrNoSecondGroupExample::A);
        return rv;
    }
    return SymNo32(0);
}

int main()
{
    SymNo32 rv = calculate(2); // 함수의 return value는 성공, 처리 성공, 실패 여부만을 나타냅니다.
    if (rv.IsFailed())
    {
        fprintf(stderr, MK_COLOR_GREEN "%s\n" MK_COLOR_RESET, rv.GetSymbolString().c_str());
    }
    return 0;
}
