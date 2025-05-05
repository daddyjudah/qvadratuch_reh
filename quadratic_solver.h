#pragma once

struct QuadraticSolution {
    int numRoots;   // 0, 1 или 2
    double root1;
    double root2;
};

// Решение квадратного уравнения ax^2 + bx + c = 0
QuadraticSolution solveQuadratic(double a, double b, double c);
