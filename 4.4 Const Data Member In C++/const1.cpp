// const data member of class in C++

// They are condtant so can not be changed once initialized.

// 1st Way: Initialize in class.
// 2nd Way: Initialize list is used to initialize them from outside.

#include <iostream>
using namespace std;

class Circle
{
    const float pi = 3.14;
    float r ;
public:
    Circle(float a):r{a} {}
    float getArea() {return pi*r*r;} // It is just returning value to getArea().And the value is float type so we write float in starting.
};// If value is int then we have written int in starting.

int main(void)
{
    Circle c1(23.3), c2(10);
    cout << c1.getArea() << endl;
    cout << c2.getArea() << endl;
}