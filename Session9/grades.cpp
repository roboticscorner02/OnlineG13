//Student grading system
//ask student for their grade
//evaluate grade : 
// if grade is less than 50 then they are failed
// if grade is greater than 50 and less than  65 then they are passed
// if grade is greater than 65 and less than 75 then they are Good
// if grade is greater than 75 and less than 85 then they are very Good
// if grade is greater than 85 to 100 then they are Excellent
//print results

#include <iostream>
int main()
{
    //while(true) 
    for(;;)
    {
        int grade;
        std::cout << " Enter Grade:\n ";
        std::cin >> grade;

        if(grade < 50)
        {
            std::cout << "Failed\n";
        }
        else if(grade>=50 && grade< 65)
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