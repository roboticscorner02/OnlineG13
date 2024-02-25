#include <iostream>
#include "calculator.h"

int main()
{
    int first_num = 0;
    int second_num = 0;
    char operation;
    int result = 0;
    std::cout << "Enter 2 numbers: " << std::endl;
    std::cin >> first_num >> second_num;
    std::cout << "Enter operation:  " << std::endl;
    std::cin >> operation;

    switch (operation)
    {
    case '+':
        result = Calculator::add(first_num,second_num);
        break;
    case '-':
        result = Calculator::subtract(first_num,second_num);
        break;
    case '*':
        result = Calculator::multiply(first_num,second_num);
        break;
    case '/':
        result = Calculator::divide(first_num,second_num);
        break;
    default:
        break;
    }

    Calculator::display_result(result);

    std::cout << "2.2 + 3.7 = " << Calculator::add(2.2,3.7) << std::endl;
}