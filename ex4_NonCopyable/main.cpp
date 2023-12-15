//
// Created by Minkyeu Kim on 12/13/23.
//

#define MK_DEBUG 1

#include <iostream>
#include "Configuration/Assert.h"
#include "Configuration/SAL.h"
#include "Configuration/AccessModifier.h"

namespace MK
{
	class Foo : private NonCopyable
	{
	private: uint32_t _data;
	public: Foo() : _data(10) {}
//	public: Foo(const Foo& other) { _data = other._data; }
	};
}

int main(void)
{
	MK::Foo f;
//	MK::Foo b = f;
//	MK::Foo c(f);
	// 그러나, Foo 에서 복사생성자를 정의해주면 작동된다.
    return 0;
}