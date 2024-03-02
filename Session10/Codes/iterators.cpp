#include <iostream>
#include <array>

int main()
{
    std::array<int,5> list;

    // std::array<int,5>::iterator iterator;

    std::cout << "Enter list elements: " << std::endl;
    for(auto iterator = list.begin(); iterator != list.end(); ++iterator)
    {
        std::cin >> *iterator;
    }

    for(auto iterator = list.begin(); iterator != list.end(); ++iterator)
    {
        std::cout << *iterator << " ";
    }

}