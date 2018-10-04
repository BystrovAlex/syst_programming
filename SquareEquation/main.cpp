#include <gtest/gtest.h>
#include "SquareEq.h"


TEST(SquareEquation, TwoRoots) {
    double x1, x2;
    EXPECT_EQ(2, SquareEquation(1, -3, 2, &x1, &x2));
    EXPECT_EQ(1, x1);
    EXPECT_EQ(2, x2);
}


TEST(SquareEquation, OneRoot) {
    double x1, x2;
    EXPECT_EQ(1, SquareEquation(1, -2, 1, &x1, &x2));
    EXPECT_EQ(1, x1);
}


TEST(LinearEquation, Int) {
    double x1, x2;
    EXPECT_EQ(1, SquareEquation(0, 5, -10, &x1, &x2));
    EXPECT_EQ(2, x1);
}


TEST(LinearEquation, Double) {
    double x1, x2;
    EXPECT_EQ(1, SquareEquation(0, 4, -7, &x1, &x2));
    EXPECT_EQ(1.75, x1);
}

TEST(LinearEquation, Zero) {
    double x1, x2;
    EXPECT_EQ(1, SquareEquation(0, 2, 0, &x1, &x2));
    EXPECT_EQ(0, x1);
}

TEST(NoEquation, Infinity) {
    double x1, x2;
    EXPECT_EQ(-1, SquareEquation(0, 0, 0, &x1, &x2));
}

TEST(NoEquation, Zero) {
    double x1, x2;
    EXPECT_EQ(0, SquareEquation(0, 0, 50, &x1, &x2));
}

TEST(SquareEquation, NoRoots) {
    double x1, x2;
    EXPECT_EQ(0, SquareEquation(2, 0, 2, &x1, &x2));
}