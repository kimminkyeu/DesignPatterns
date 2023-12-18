#include "Mk/Utility.h"
#include "Mk/SymNo32.h"
#include "Mk/DEFINE_ENUM_ERRNO.inl"

_Check_return_ SymNo32 calculate(_In_opt_ int param) noexcept;

SymNo32 calculate(int param) noexcept
{
    SymNo32 rv(0);
    if ( 1 < param )
    {
        rv.Set(eErrNoSecondGroup_A);
        // SymNo32에 등록할 enum은 프로그래머가 직접 선언하는 것보다
        // 모든 [ 심볼-넘버 : 심볼-문자열 ] 페어가 정의된 단일 파일 한개에서 관리하고
        // 이 파일을 별도 처리기를 통해 헤더로 생성하는게 좋을 것 같습니다.
        return rv;
    }
    return SymNo32(0);
}

int main()
{
    SymNo32 rv = calculate(2); // 함수의 return value는 성공, 처리 성공, 실패 여부만을 나타냅니다.
    if (rv.IsFailed())
    {
        const std::string errMessage = rv.GetSymbolString();
        fprintf(stderr, MK_COLOR_RED "%s\n" MK_COLOR_RESET, errMessage.c_str());

        switch (rv.GetRaw())
        {
            case ( eErrNoFirstGroup_A ):
                // ...
                break;
            case ( eErrNoSecondGroup_A ):
                // ...
                _Fallthrough_;
            case ( eErrNoSecondGroup_B ):
                // ...
                break;
            default:
                // ...
                break;
        }
    }
    return 0;
}
