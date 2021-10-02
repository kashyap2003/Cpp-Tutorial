#include <iostream>
using namespace std;

int main(void)
{
    int a = 23;
    int &x = a; // &x is a reference variable.

    cout << "a: " << a << endl;
    cout << "x: " << x << endl;

    cout << "NOTE: TO GET REF VARIABLE YOU HAVE TO PUT \"&\" BEFORE THAT VARIABLE TO WORK AS REF VARIABLE"  << endl;
}