#include "QuadraticEquation.h"
#include <cmath>

namespace EquationSolver {
    std::vector<double> QuadraticEquation::solve() const {
        double discriminant = b * b - 4 * a * c;
        if (discriminant < 0) {
            throw std::runtime_error("No real solutions");
        }
        if (discriminant == 0) {
            return { -b / (2 * a) };
        }
        double sqrtDiscriminant = std::sqrt(discriminant);
        return { (-b + sqrtDiscriminant) / (2 * a), (-b - sqrtDiscriminant) / (2 * a) };
    }

    std::string QuadraticEquation::toString() const {
        std::ostringstream oss;
        oss << a << "x^2 + " << b << "x + " << c << " = 0";
        return oss.str();
    }
}
