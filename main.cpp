#include <iostream>
#include <stdexcept>

#include "calculator.h"

int main() {
    Calculator calc;

    std::cout << "Simple Calculator Project" << std::endl;
    std::cout << "5 + 3 = " << calc.add(5, 3) << std::endl;
    std::cout << "5 - 3 = " << calc.subtract(5, 3) << std::endl;
    std::cout << "5 * 3 = " << calc.multiply(5, 3) << std::endl;
    std::cout << "6 / 3 = " << calc.divide(6, 3) << std::endl;

    try {
        calc.divide(5, 0);
    } catch (const std::invalid_argument& e) {
        std::cout << "5 / 0 -> Error: " << e.what() << std::endl;
    }

    return 0;
}
