#include <iostream>
#include "LinearEquation.h"
#include "QuadraticEquation.h"
#include "SystemOfEquations.h"
#include <memory>

using namespace std;
using namespace EquationSolver;

int main() {
    auto le = make_shared<LinearEquation>(2, -4); // 2x - 4 = 0
    auto qe = make_shared<QuadraticEquation>(1, -3, 2); // x^2 - 3x + 2 = 0

    SystemOfEquations system;
    system.addEquation(le);
    system.addEquation(qe);

    try {
        cout << "System of equations:\n" << system.toString() << endl;
        auto solutions = system.solve();
        for (const auto& solution : solutions) {
            cout << "Solution: ";
            for (double x : solution) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    catch (const exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
