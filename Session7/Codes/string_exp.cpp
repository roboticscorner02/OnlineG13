#include <iostream>

int main()
{
    std::string name;
    const std::string addedstring = " Corner";
    //addedstring = "robot"; // not allowed
     // () or = or {} can be used coz its a contructor
    std::cout << "Please enter first name:\n" << std::endl;
    std::cin >> name;
    name+=addedstring; // name = name + addedstring
    std::cout << "Name: " << name << std::endl;
}