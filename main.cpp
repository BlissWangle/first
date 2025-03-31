#include <iostream>
#include "simple_calculator.h"

int main() {
    SimpleCalculator calc;
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Addition: " << calc.add(a, b) << std::endl;
    std::cout << "Multiplication: " << calc.multiply(a, b) << std::endl;

    return 0;
}