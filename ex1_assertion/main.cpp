//
// Created by Minkyeu Kim on 12/13/23.
//

#include <iostream>
#include "Configuration/Assert.h"

int main(void)
{
//	MK_ASSERT_MUST("김민규", (1 == 0), "이러면 안됩니다!");
	MK_ASSERT_TEST("김민규", (1 == 0), "이러면 안됩니다!");
//    std::cout << "hello, world!" << std::endl;

    return 0;
}