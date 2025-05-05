#include "quadratic_solver.h"
#include <cmath>

QuadraticSolution solveQuadratic(double a, double b, double c) {
    QuadraticSolution solution{0, 0.0, 0.0};

    if (a == 0) {
        // Уравнение становится линейным: bx + c = 0
        if (b != 0) {
            solution.numRoots = 1;
            solution.root1 = -c / b;
        }
        return solution;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        solution.numRoots = 0;
    } else if (discriminant == 0) {
        solution.numRoots = 1;
        solution.root1 = -b / (2 * a);
    } else {
        solution.numRoots = 2;
        double sqrtD = std::sqrt(discriminant);
        solution.root1 = (-b + sqrtD) / (2 * a);
        solution.root2 = (-b - sqrtD) / (2 * a);
    }

    return solution;
}
