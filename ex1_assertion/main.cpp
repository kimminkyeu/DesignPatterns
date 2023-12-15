//
// Created by Minkyeu Kim on 12/13/23.
//

#define MK_DEBUG 1

#include <iostream>
#include "Configuration/Assert.h"

namespace MK
{
	class Age
	{
	private: int32_t _age;
	public: explicit Age(int32_t age) noexcept;

	public: Age() = delete;
	public: Age(const Age& other);
	public: Age& operator = (const Age& other);
	public: void Set(int32_t age) noexcept;
	public: int32_t Get() const noexcept;
	};

	Age::Age(int32_t age) noexcept : _age(age) { MK_ASSERT_DEBUG("김민규", 0 <= age, "나이가 0보다 작을 수 없습니다."); }
	Age::Age(const MK::Age& other) : Age(0) { *this = other; }
	void Age::Set(int32_t age) noexcept { _age = age; }
	int32_t Age::Get() const noexcept { return _age; }
	Age& Age::operator=(const Age& other) { Set(_age); }
}

namespace MK
{
	class Human
	{
	private: Age _age;
	public: Human(const Age& age) noexcept;
	public: Age getAge() const noexcept;
	};

	Human::Human(const Age& age) noexcept
			: _age(0)
	{
		_age.Set(age.Get());
	};
}

namespace MK
{

}
int main(void)
{
//	Age _age; // error!
//	Human jason({10}); // error!
//	Human park(Age(-10)); // assert!

	MK::Human jason(MK::Age(10));
	MK::Age jason_age = jason.getAge(); // R-value
	MK::Age test = jason_age; // cannot assign L-value. Error!
	MK::Age test2 = jason.getAge(); // R-value
	MK::Age test3 = MK::Age(40); // R-value
	MK::Age test4(40); // Explicit contructor call

    return 0;
}