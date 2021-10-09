// Data members of classes in C++

// ANS:
// They are attributes of classes.
// They holds the data of objects.

// TYPES:
// int, char, String, Double ......
// array types, bit fields, and user-define type such as class type.

#include <iostream>
using namespace std;

class Point
{
public:
    int x,y;
    Point(int a,int b):x{a}, y{b} {}
};

int main(void)
{
    Point p1(2,3), p2(3,6);

    cout << p1.x << "  " << p1.y << endl;
    cout << p2.x << "  " << p2.y << endl;
}