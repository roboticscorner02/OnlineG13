#include <iostream>
#include <array>

int main()
{
    std::array<int,3> array;
    for(auto& element : array)
    {
    std::cout << element << std::endl;
    }
}