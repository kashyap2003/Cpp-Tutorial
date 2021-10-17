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
    Point(int x=0, int y=0):x{x}, y{y} {}

    void print() 
    {
        cout << "X: " << x << " Y: " << y << endl;
    }
    Point operator - ()
    {
        return Point(-x,-y);
    }
};

int main()
{
    Point p1(2,3), p2;
    p1.print();
    p2.print();
    Point p3 = -p1;
    p3.print();
}