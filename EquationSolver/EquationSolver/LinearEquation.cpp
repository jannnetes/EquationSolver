#include "LinearEquation.h"

namespace EquationSolver {
    std::vector<double> LinearEquation::solve() const {
        if (a == 0) {
            throw std::runtime_error("No solutions or infinitely many solutions");
        }
        return { -b / a };
    }

    std::string LinearEquation::toString() const {
        std::ostringstream oss;
        oss << a << "x + " << b << " = 0";
        return oss.str();
    }
}
