#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H

#include "Equation.h"
#include <vector>
#include <stdexcept>
#include <string>
#include <sstream>

namespace EquationSolver {
    class QuadraticEquation : public Equation {
    private:
        double a;
        double b;
        double c;
    public:
        QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}
        std::vector<double> solve() const override;
        std::string toString() const override;
    };
}

#endif // QUADRATICEQUATION_H
