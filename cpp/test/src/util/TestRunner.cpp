//
// Created by Dominik Lau on 26/09/2022.
//

#include "TestRunner.h"
#include <iostream>

void test::util::TestRunner::myAssert(bool cond, const std::string& strCond) {
    if(!cond){
        std::cerr << "assertion failed at:" <<strCond << std::endl;
        assert(0);
    }
}