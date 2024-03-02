#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int &r = a;
    cout << "Address of r: " << &r << "  Address of a: " << &a << endl;
    r = 5;
    cout << "a = " << a << endl;

    int *ptr = nullptr; // correct
    // int &r; // not correct
}