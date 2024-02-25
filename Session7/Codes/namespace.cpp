#include <iostream>

namespace myStandard
{
    std::uint16_t variable;
}
double variable = 0.0;
int main()
{
    myStandard::variable = 16;
std::cout << "Standard Variable " << myStandard::variable << " Normal Variable " << variable << std::endl;
}