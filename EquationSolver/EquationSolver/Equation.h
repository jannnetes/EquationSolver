#ifndef EQUATION_H
#define EQUATION_H

#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

class Equation {
public:
    virtual ~Equation() = default;
    virtual vector<double> solve() const = 0;
    virtual string toString() const = 0;
};

#endif // EQUATION_H
