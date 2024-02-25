#include <iostream>

int main()
{
    std::cout << "Please enter 2 numbers: " << std::endl;
    int x;
    int y;
    std::cin >> x >> y;
    std::cout << "Please enter opeartion " << std::endl;
    char operation;
    std::cin >> operation;
    int result;
    switch(operation)
    {
        case '+': result = x+y; break;
        case '-': result = x-y; break;
        case '*': result = x*y; break;
        case '/': result = x/y; break;
        default: std::cout << "Invalid  " << std::endl;
    }
    std::cout << "Result:  " << result << std::endl;
}