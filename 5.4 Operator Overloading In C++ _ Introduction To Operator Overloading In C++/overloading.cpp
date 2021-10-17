// TOPIC: Operator Overloading in C++

// NOTES:
// 1. In C++ it is possible to change the behaviour of operators. (+,-,✽....)
// 2. But we can change the behaviour for user defined type (class, struct) only.

#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    Point(int x=0, int y=0):x{x}, y{y} {} // This is just mix of default and variaable Declaration.
    Point operator + (const Point &rhs)
    {
        Point p;
        p.x = x+rhs.x;
        p.y = y+rhs.y;
        return p;
    }
    void print() 
    {
        cout << "x: " << x << endl << "y: " << y << endl;
    }
};

int main()
{
    Point p1(1,2), p2(3,4);
    Point p3 = p1 + p2;
    p3.print();
}