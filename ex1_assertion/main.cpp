//
// Created by Minkyeu Kim on 12/13/23.
//

#define MK_DEBUG 1

#include <iostream>
#include "Configuration/Assert.h"

class Age
{
private: int32_t _age;
public: explicit Age(int32_t age) noexcept;
};

Age::Age(int32_t age) noexcept
	: _age(age)
{
	MK_ASSERT_DEBUG("김민규", 0 <= age, "나이가 0보다 작을 수 없습니다.");
}

class Human
{
private: Age _age;
public: Human(const Age& age) noexcept;
};

Human::Human(const Age& age) noexcept
	: _age(age)
{}

int main(void)
{
//	Human jason({10}); // error!
	Human jason(Age(10));
	Human park(Age(-10)); // assert!
    return 0;
}