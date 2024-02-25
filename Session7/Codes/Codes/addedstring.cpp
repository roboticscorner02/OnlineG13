#include <iostream>

int main()
{
    std::string name;
    const std::string addedstring(" Corner"); //=" ", {}
    std::cout << "Enter name:" << std::endl;
    std::cin >> name; 
    name+=addedstring;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Size of string is: " << 
                        sizeof(std::string) << std::endl;
}