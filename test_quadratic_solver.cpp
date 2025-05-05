#include "quadratic_solver.h"
#include <gtest/gtest.h>

TEST(QuadraticSolverTests, TwoRealRoots) {
    auto solution = solveQuadratic(1, -3, 2); // x^2 - 3x + 2 = 0
    EXPECT_EQ(solution.numRoots, 2);
    EXPECT_DOUBLE_EQ(solution.root1, 2.0);
    EXPECT_DOUBLE_EQ(solution.root2, 1.0);
}

TEST(QuadraticSolverTests, OneRealRoot) {
    auto solution = solveQuadratic(1, 2, 1); // x^2 + 2x + 1 = 0
    EXPECT_EQ(solution.numRoots, 1);
    EXPECT_DOUBLE_EQ(solution.root1, -1.0);
}

TEST(QuadraticSolverTests, NoRealRoots) {
    auto solution = solveQuadratic(1, 0, 1); // x^2 + 1 = 0
    EXPECT_EQ(solution.numRoots, 0);
}

TEST(QuadraticSolverTests, LinearEquation) {
    auto solution = solveQuadratic(0, 2, -4); // 2x - 4 = 0
    EXPECT_EQ(solution.numRoots, 1);
    EXPECT_DOUBLE_EQ(solution.root1, 2.0);
}
