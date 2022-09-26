#pragma once

#define MY_ASSERT(cond) test::util::TestRunner::myAssert(cond, #cond)

#include <functional>
#include <string>

namespace test::util {
    class TestRunner {
    public:
        static void myAssert(bool cond, const std::string& strCond);
    };
}