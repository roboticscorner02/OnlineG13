#include <iostream>

int main()
{
    while(1)
    {
        int grade;
        std::cout << " Enter Grade:\n ";
        std::cin >> grade;

        if(grade < 50)
        {
            std::cout << "Failed\n";
        }
        else if(grade>=50 & grade< 65)
        {
            std::cout << "Passed\n";
        }
        else if(grade>=65 && grade<70)
        {
            std::cout << "Good\n";
        }
        else if(grade>=70 && grade<85)
        {
            std::cout << "Very Good\n";
        }
        else if(grade>=85 && grade<=100)
        {
            std::cout << "Excellent\n";
        }
        else
        {
            std::cout << "Invalid Grade\n";
        }
    }
}