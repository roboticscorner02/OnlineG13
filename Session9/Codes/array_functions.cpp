#include <iostream>
#include <array>

void printarray(const std::array<int,3> &arr)
{
    for (int element : arr)
    {
       std::cout << "Value: " << element << std::endl;
    }
}

void inputarray(std::array<int,3> &input)
{
    std::cout << "Input: " << std::endl;
    for (int &element : input)
    {
       std::cin >> element;
    }
}

int main()
{
    constexpr unsigned int size = 3U;
    std::array<int,size> list{0};
    inputarray(list);
    printarray(list);
    list.fill(3);
    printarray(list);
}