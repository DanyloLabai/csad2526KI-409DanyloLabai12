#include <iostream>
#include "gtest/gtest.h"
#include "../math_operations.h"


TEST(AdditionTests, AddPositives) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(AdditionTests, AddNegatives) {
    EXPECT_EQ(add(-4, -6), -10);
}

TEST(AdditionTests, AddPosAndNeg) {
    EXPECT_EQ(add(7, -2), 5);
}

TEST(AdditionTests, AddWithZero) {
    EXPECT_EQ(add(0, 5), 5);
}

TEST(AdditionTests, AddZeros) {
    EXPECT_EQ(add(0, 0), 0);
}

TEST(AdditionTests, LargeValues) {
    EXPECT_EQ(add(1000000, 2000000), 3000000);
}
