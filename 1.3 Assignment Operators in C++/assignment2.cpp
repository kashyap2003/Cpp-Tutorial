#include <iostream>
using namespace std;

int main(void)
{
    int a=10, b=12, c=15;

    b=c=++a;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    cout << "If we do pre ++ then the value of all element will change";
}