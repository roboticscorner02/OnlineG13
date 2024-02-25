#include <iostream>

int main()
{
    double radius = 0.0;
    constexpr double PI = 3.14;
    std::cout << "Enter radius: " << std::endl;
    std::cin >> radius;
    double area = radius*radius*PI;
    std::cout << "Area = " << area << std::endl;
}