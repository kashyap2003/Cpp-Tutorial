// Constant member function in C++

// Notes:
// This is used to restrict modification of data members inside function.

#include <iostream>
using namespace std;

class Base
{
    mutable int x; // If you wrote mutable in the function then it can change the value of constant function.
    int y; // This funtion can not change value in const function because it do not contain mutable in it.

public:
    Base() {}
    Base(int a, int b):x{a}, y{b} {}

    void setX(int a) { x=a; }
    int getX() const {x=15; return x;}
};

int main()
{
    Base b;
    b.setX(23);
    cout << b.getX() << endl;
}