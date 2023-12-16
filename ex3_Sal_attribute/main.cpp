#include "Mk/Utility.h"
#include "Mk/SymNo32.h"

enum class eErrInvalidContext : uint32_t // max 256
{
    None = 0,
    A, // = 1
    B, // = 2
    C, // = 4
    D, // = 5

    Count
};

// NOTE: _Check_return_
// The checker reports an error if the function is called in a void context.
// Annotates a return value and states that the caller should inspect it.
_Check_return_ SymNo32 calculate(_In_opt_ int param) noexcept;

SymNo32 calculate(int param) noexcept
{
    SymNo32 rv(0);
    if ( 1 < param )
    {
        rv.Set(eErrInvalidContext::D);
        return rv;
    }
    return SymNo32(0);
}

int main()
{
    // NOTE: 함수의 return value는 성공, 처리 성공, 실패 여부만을 나타냅니다.
    SymNo32 rv = calculate(2);
    if (rv.IsFailed())
    {
        // NOTE: exception 방식을 사용하지 않는 이유는 구글 코드 스탠다드 참고.
        //       https://google.github.io/styleguide/cppguide.html#Exceptions
        fprintf(stderr, MK_COLOR_GREEN "%s\n" MK_COLOR_RESET, rv.GetSymbolString().c_str());
    }
    return 0;
}
