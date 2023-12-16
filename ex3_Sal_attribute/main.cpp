#include "Mk/Utility.h"


_Ret_maybenull_ void *MightReturnNullPtr2();

_Check_return_void void doSomthing(_Out_ int* numPtr);

// NOTE: _Check_return_
// The checker reports an error if the function is called in a void context.
// Annotates a return value and states that the caller should inspect it.
_Check_return_ SymNo32 calculate() noexcept;

enum class eErrInvalidContext : uint8_t // max 256
{
    eErrInvalidContext_A = 0,
    eErrInvalidContext_B, // = 1
    eErrInvalidContext_C, // = 2
    eErrInvalidContext_D, // = 4
    eErrInvalidContext_E, // = 5

    eErrInvalidContext_Count
};

// ... return eErrNo_InvalidHousing...
// ... return SymNo32(0);
class SymNo32 : private MK::NonCopyable
{
private: uint32_t _noRaw;
public: explicit SymNo32(uint32_t rawNo);
public: _Check_return_ uint32_t GetRaw() const noexcept;
public: _Must_inspect_result_ bool IsFailed() const noexcept;
// getString() --> SymNo32의 _noRaw에 대응하는 에러 문자열을 출력.
};

SymNo32::SymNo32(uint32_t rawNo) : _noRaw(rawNo) { /* ... */ };
uint32_t SymNo32::GetRaw() const noexcept { return _noRaw; };
bool SymNo32::IsFailed() const noexcept { return (0 == _noRaw); };

SymNo32 calculate() noexcept
{
    if (2)
    {
        return eErrInvalidContext::eErrInvalidContext_A;
    }
    return SymNo32(0);
}

 void doSomething(int* numPtr)
{
    *numPtr = 2;
}

int main(void)
{
    int num = 10;
    doSomething(&num);
    return 0;
}
