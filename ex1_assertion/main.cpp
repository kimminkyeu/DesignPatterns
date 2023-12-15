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

public: Age() = delete;
public: Age(const Age& other) = delete;

public: void Set(int32_t age) noexcept;
public: int32_t Get() const noexcept;
};

Age::Age(int32_t age) noexcept : _age(age) { MK_ASSERT_DEBUG("김민규", 0 <= age, "나이가 0보다 작을 수 없습니다."); }
void Age::Set(int32_t age) noexcept { _age = age; }
int32_t Age::Get() const noexcept { return _age; }

//Age::Age(const Age& other) noexcept {};

class Human
{
private: Age _age;

public: Human(const Age& age) noexcept;
public: Age getAge() const noexcept;
};

//Human::Human(const Age& age) noexcept : _age(age) {};
//Human::Human(const Age& age) noexcept { _age.Set(age.Get()); };
Human::Human(const Age& age) noexcept { _age.Set(age.Get()); };
//Age Human::getAge() const noexcept { return _age; }; // error

int main(void)
{
//	Age _age; // error!
//	Human jason({10}); // error!
	Human jason(Age(10));
//	Human park(Age(-10)); // assert!
	Age jason_age = jason.getAge();
//	Age test = jason_age;

    return 0;
}