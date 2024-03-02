#include <iostream>

int main()
{
    int x = 1;
    //x = x+1;
    //x+=1;
    //int y = x++; // postfix
    int y = ++x; // prefix
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    int z = ++x;
    std::cout << "z = " << z << std::endl;

   //  ?: ternary operator
   x = 1;
   // return_statement = condition ? true_condition : false_condition   ;
        int w          = x == 1    ? y               :     x           ;
        // true: w = y
        // false: w = x
}