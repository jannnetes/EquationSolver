#ifndef LINEAREQUATION_H
#define LINEAREQUATION_H

#include "Equation.h"
#include <vector>
#include <stdexcept>
#include <string>
#include <sstream>

namespace EquationSolver {
    class LinearEquation : public Equation {
    private:
        double a;
        double b;
    public:
        LinearEquation(double a, double b) : a(a), b(b) {}
        std::vector<double> solve() const override;
        std::string toString() const override;
    };
}

#endif // LINEAREQUATION_H
