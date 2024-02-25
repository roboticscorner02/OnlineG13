#include <iostream>
#include "calculator.h"

int Calculator::add(int num1, int num2)
{
    return num1 + num2;
}

int Calculator::subtract(int num1, int num2)
{
    return num1 - num2;
}

int Calculator::multiply(int num1, int num2)
{
    return num1 * num2;
}

int Calculator::divide(int num1, int num2)
{
    return num1 / num2;
}

int Calculator::mod(int num1, int num2)
{
    return num1 % num2;
}

void Calculator::display_result(int result)
{
    std::cout << "The result is: " << result << std::endl;
}

double Calculator::add(double num1, double num2)
{
    return num1 + num2;
}

double Calculator::subtract(double num1, double num2)
{
    return num1 - num2;
}

double Calculator::multiply(double num1, double num2)
{
    return num1 * num2;
}

double Calculator::divide(double num1, double num2)
{
    return num1 / num2;
}

void Calculator::display_result(double result)
{
    std::cout << "The result is: " << result << std::endl;
}