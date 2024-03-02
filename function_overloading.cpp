#include <iostream>

int add(int a, int b);

int main()
{
    int x = 3;
    int y = 4;
    int c = 7;
    double w = 5.5;
    double z = 4.5;
    add(w,z);
}

int add(int a, int b)
{
    return a+b;
}

double add(double a, double b)
{
    return a+b;
}

int add(int a, int b, int c)
{
    return a+b+c;
}
