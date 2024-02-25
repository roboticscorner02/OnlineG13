#ifndef CALCULATOR_H
#define CALCULATOR_H

namespace Calculator
{
    int add(int num1, int num2);
    int subtract(int num1, int num2);
    int multiply(int num1, int num2);
    int divide(int num1, int num2);
    int mod(int num1, int num2);
    void display_result(int result);

    double add(double num1, double num2);
    double subtract(double num1, double num2);
    double multiply(double num1, double num2);
    double divide(double num1, double num2);
    void display_result(double result);
}
#endif