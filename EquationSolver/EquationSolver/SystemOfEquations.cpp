#include "SystemOfEquations.h"

namespace EquationSolver {
    void SystemOfEquations::addEquation(std::shared_ptr<Equation> eq) {
        equations.push_back(eq);
    }

    std::vector<std::vector<double>> SystemOfEquations::solve() const {
        std::vector<std::vector<double>> solutions;
        for (const auto& eq : equations) {
            solutions.push_back(eq->solve());
        }
        return solutions;
    }

    std::string SystemOfEquations::toString() const {
        std::ostringstream oss;
        for (const auto& eq : equations) {
            oss << eq->toString() << "\n";
        }
        return oss.str();
    }
}
