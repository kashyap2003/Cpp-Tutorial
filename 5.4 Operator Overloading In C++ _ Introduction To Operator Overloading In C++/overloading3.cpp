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
    Point(int x=0, int y=0):x{x}, y{y} {}
    Point operator + (const Point &rhs)
    {
        Point p;
        p.x = x+rhs.x;
        p.y = y+rhs.y;
        return p;
    }
      Point operator - (const Point &rhs)
    {
        Point p;
        p.x = x-rhs.x;
        p.y = y-rhs.y;
        return p;
    }
         Point add(const Point &rhs)
    {
        Point p;
        p.x = x+rhs.x;
        p.y = y+rhs.y;
        return p;
    }
    void print() 
    {
        cout << "x: " << x << " y: " << y << endl;
    }
};

int main()
{
    Point p1(1,2), p2(3,4);
    Point p3 = p1 + p2;
    Point p4 = p3-p1;
    Point p5 = p1.add(p2);
    p5.print();
    p4.print();
    p3.print();
}