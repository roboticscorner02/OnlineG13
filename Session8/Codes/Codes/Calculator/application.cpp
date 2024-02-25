#include <iostream>
#include "calculator.hpp"

int main()
{
    int number1;
    int number2;
    char operation;
    int return_value;
    std::cout << "Enter 2 numbers: " << std::endl;
    std::cin >> number1 >> number2;
    std::cout << "Enter operation: " << std::endl;
    std::cin >> operation;

    switch (operation)
    {
    case '+':
        return_value = Calculator::add(number1,number2);
        break;
    case '-':
        return_value = Calculator::sub(number1,number2);
        break;
    case '*':
        return_value = Calculator::mul(number1,number2);
        break;  
    case '/':
        return_value = Calculator::div(number1,number2);
        break;  
    case '%':
        return_value = Calculator::mod(number1,number2);
        break;
    default:
    std::cout << "Enter a valid operation" <<  std::endl;
        break;
    }

    Calculator::Display(return_value, number1, number2, operation);
}