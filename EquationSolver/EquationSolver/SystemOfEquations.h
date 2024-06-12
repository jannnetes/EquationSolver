#ifndef SYSTEMOFEQUATIONS_H
#define SYSTEMOFEQUATIONS_H

#include "Equation.h"
#include <vector>
#include <memory>
#include <string>
#include <sstream>

namespace EquationSolver {
    class SystemOfEquations {
    private:
        std::vector<std::shared_ptr<Equation>> equations;
    public:
        ~SystemOfEquations() = default;
        void addEquation(std::shared_ptr<Equation> eq);
        std::vector<std::vector<double>> solve() const;
        std::string toString() const;
    };
}

#endif // SYSTEMOFEQUATIONS_H
