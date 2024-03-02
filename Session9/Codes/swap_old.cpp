#include <iostream>

void swap(int num1, int num2)
{
        int temp = num2;
        num2 = num1;
        num1 = temp;
}

int main()
{
    int num1 = 3;
    int num2 = 5;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;
    swap(num1, num2);
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

}