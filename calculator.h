#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    virtual ~Calculator() = default;
    virtual int add(int a, int b) = 0;
    virtual int multiply(int a, int b) = 0;
};

#endif // CALCULATOR_H