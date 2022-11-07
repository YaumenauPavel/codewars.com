#pragma once

#include <gtest/gtest.h>

template <typename T, typename R>
void gtest_expect_eq(T &&result, R &&check)
{
    std::cout << "result: " << result << ", check: " << check << std::endl;
    EXPECT_EQ(result, check);
}