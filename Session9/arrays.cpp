#include <iostream>
#include <array>
#include <algorithm>

void inputarray(std::array<int,3> &array);
void printarray(const std::array<int,3> &array);

int main()
{
    constexpr int x = 3;
    std::array<int,x> array;
    inputarray(array);
    array.fill(3);
    printarray(array);
}

void inputarray(std::array<int,3> &input)
{
    std::cout << "Input: " << std::endl;
    for(int &element : input)
    {
        std::cin >> element;
    }
}

void printarray(const std::array<int,3> &array)
{
    for(int element : array)
    {
        std::cout << "Value: " << element << std::endl;
    }
}