#include <iostream>

void swap1(int num1, int num2)
{
        int temp = num2;
        num2 = num1;
        num1 = temp;
} 

void swap2(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap3(int &x, int &y)
{
    int temp = y;
    y = x;
    x = temp;
}

int main()
{
    int n1 = 8;
    int n2 = 10;

    std::cout << "n1 = " << n1 << "  " << "n2 = " << n2 << std::endl;
    swap3(n1,n2);
    std::cout << "n1 = " << n1 << "  " << "n2 = " << n2 << std::endl;


}