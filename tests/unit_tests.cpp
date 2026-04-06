#include <gtest/gtest.h>
#include "math_operations.h"

TEST(MathOperationsTest, AddPositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(MathOperationsTest, AddNegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
}

TEST(MathOperationsTest, AddMixedNumbers) {
    EXPECT_EQ(add(-2, 3), 1);
}
