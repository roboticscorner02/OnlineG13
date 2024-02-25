#include <iostream>

namespace myvariables
{
    int x;
}

double x = 0.0;

int main()
{
    myvariables::x = 5;
    std::cout << "double x = " << x << std::endl;
    std::cout << "int x = " << myvariables::x << std::endl;
}