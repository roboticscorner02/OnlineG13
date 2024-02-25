#include <iostream>

int main()
{
    double miles = 0.0;
    constexpr double MI_2_KM = 1.609;
    std::cout << "Enter miles: " << std::endl;
    std::cin >> miles;
    double kilos = miles*MI_2_KM;
    std::cout << "Kilometers: " << kilos << std::endl;
}