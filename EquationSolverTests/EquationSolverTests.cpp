#include <iostream>
#include "LinearEquation.h"
#include "QuadraticEquation.h"
#include "SystemOfEquations.h"
#include <memory>
#include <cassert>
#include <cmath>
#include <vector>

using namespace std;
using namespace EquationSolver;

const double EPSILON = 1e-9;

bool isNearlyEqual(double a, double b, double epsilon = EPSILON) {
    return fabs(a - b) < epsilon;
}

void testLinearEquation() {
    LinearEquation le(2, -4); // 2x - 4 = 0
    vector<double> solutions = le.solve();
    assert(solutions.size() == 1); // Проверка количества корней
    assert(solutions[0] == 2); // Проверка корня уравнения
    cout << "testLinearEquation passed." << endl;
}

void testNewQuadraticEquation() {
    QuadraticEquation qe(1, 4, 4); // x^2 + 4x + 4 = 0
    vector<double> solutions = qe.solve();
    cout << "New Quadratic Equation Solutions: " << solutions[0] << endl;
    assert(solutions.size() == 1); // Проверка количества корней
    assert(isNearlyEqual(solutions[0], -2)); // Проверка корня
    cout << "testNewQuadraticEquation passed." << endl;
}

void testSystemOfEquations() {
    auto le = make_shared<LinearEquation>(2, -4); // 2x - 4 = 0
    auto qe = make_shared<QuadraticEquation>(1, -3, 2); // x^2 - 3x + 2 = 0

    SystemOfEquations system;
    system.addEquation(le);
    system.addEquation(qe);

    vector<vector<double>> solutions = system.solve();
    assert(solutions.size() == 2); // Проверка количества решений
    cout << "testSystemOfEquations passed." << endl;
}

int main() {
    testLinearEquation();
    testNewQuadraticEquation();
    testSystemOfEquations();
    cout << "All tests passed!" << endl;
    return 0;
}
