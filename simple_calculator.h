#ifndef SIMPLE_CALCULATOR_H
#define SIMPLE_CALCULATOR_H

#include "calculator.h"

class SimpleCalculator : public Calculator {
public:
    int add(int a, int b) override;
    int multiply(int a, int b) override;
};

#endif // SIMPLE_CALCULATOR_H