#include <iostream>

int main()
{
    double radius = 0.0;
    constexpr double PI = 3.14; // text replacement at compile time
    std::cout << "Input radius:\n " << std::endl;
    std::cin >> radius;
    double Area = radius*radius*PI;
    std::cout << "Area Value: " << Area << std:: endl;

}