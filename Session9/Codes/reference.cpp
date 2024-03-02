#include <iostream>

int main()
{
    int x = 1;
    int &r = x;
    std::cout << "address of r: " << &r << ",  address of x: " << &x << std::endl;
    r = 5;
    std::cout << "x = " << x << std::endl;
    r++;

}