//
// Created by Minkyeu Kim on 12/13/23.
//

#define MK_DEBUG 1

#include <iostream>
#include "Configuration/Assert.h"
#include "Configuration/SAL.h"
#include "Configuration/CopyableAndMovableTypes.h"

namespace MK
{
	class Foo : private NonCopyable
	{
	private: uint32_t _data;
	public: Foo() : _data(10) {}
//	public: Foo(const Foo& other) { _data = other._data; }
	};

	class Bar : private Copyable
	{
	private: uint32_t _data;
	public: Bar() = default;
	public: Bar(const Bar& other) = default;
	};

	class Hello
	{
	private: uint32_t _data;
	};

	class Welcome : private MoveOnly
	{
	private: uint32_t _data;
	public: Welcome() = default;
	public: Welcome(const Welcome& other) = default;
//	public: Welcome(Welcome&& other) {};
	};
}

int main(void)
{
	MK::Foo f;
//	MK::Foo b = f; // Error!
//	MK::Foo c(f); // Error!

	MK::Bar e;

	MK::Hello k; // OK;

	MK::Welcome w;
	MK::Welcome wt;
//	w = wt;
//	w = MK::Welcome();
    return 0;
}