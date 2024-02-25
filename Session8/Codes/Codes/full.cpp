#include <iostream>
#include "calc_header.h"

int main()
{
    std::cout << "Enter 2 numbers:" << std::endl;
    int x;
    int y;
    std::cin >> x >> y;
    std::cout << "Enter desired operation:" << std::endl;
    char operation; // + - * /
    std::cin >> operation;
    int result;

    switch ((operation))
    {
    case '+':
        result = add(x,y);
        break;
    case '-':
        result = sub(x,y);
        break; 
    case '*':
        result = mul(x,y);
        break;
    case '/':
        result = divide(x,y);
        break;   
    default:
        break;
    }

    std::cout << "result = " << result << std::endl;
}

