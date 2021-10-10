// Constant member function in C++

// Notes:
// This is used to restrict modification of data members inside function.

#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    Base() {}
    Base(int a):x{a} {}

    void setX(int a) { x=a; }
    int getX() const {return x;}
};

int main()
{
    Base b;
    b.setX(23);
    cout << b.getX() << endl;
}