#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int y = ++x;
    cout << "y = " << y << endl;
    cout << "x = " << x << endl;
    int z = x++;
    cout << "z = " << z << endl;
    cout << "x = " << x << endl;

    // Ternary Operator:
    int w = x == 1 ? y : x;
    cout << "w = " << w << endl;
}