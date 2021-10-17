// TOPIC: Unary Operator Overloading in C++

// POINTS
// 1. Operator overloading works with {class/struct}.
// 2. Unary operator overloading needs only one operand.

#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    Point(int x=0, int y=0):x{x}, y{y} {} // This is an mix of default and variable Daclaration.

    void print() 
    {
        cout << "X: " << x << " Y: " << y << endl;
    }
};

int main()
{
    Point p1(2,3), p2;
    p1.print();
    p2.print();
}