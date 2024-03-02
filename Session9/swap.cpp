#include <iostream>

void swap1(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap3(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 3;
    int b = 5;
    std::cout << "a = " << a << " b = " << b << std::endl;
    swap3(a,b);
    std::cout << "a = " << a << " b = " << b << std::endl;
}