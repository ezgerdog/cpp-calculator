#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    // Throws std::invalid_argument when b is zero.
    double divide(double a, double b);
};

#endif
