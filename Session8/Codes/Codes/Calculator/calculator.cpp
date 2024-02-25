#include <iostream>
#include "calculator.hpp"

int Calculator::add(int num1, int num2)
    {
        return num1 + num2;
    }
int Calculator::sub(int num1, int num2)
    {
        return num1 - num2;
    }
int Calculator::mul(int num1, int num2)
    {
        return num1 * num2;
    }
int Calculator::div(int num1, int num2)
    {
        return num1 / num2;
    }
int Calculator::mod(int num1, int num2)
    {
        return num1 % num2;
    }
void Calculator::Display(int value, int num1, int num2, char op)
    {
        std::cout << "Answer of " << num1 << " " << op << " " << num2 <<
                        " = " << value << std::endl;

    }