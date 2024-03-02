#include <iostream>

int main()
{

    int x = 3;
    std::cout << "x = " << x << std::endl;
    int *ptr = &x;
    std::cout << "ptr = " << ptr << std::endl; // address of x
    std::cout << "*ptr = " << *ptr << std::endl; // value inside the address of x
    std::cout << "&x = " << &x << std::endl; // address of x

}