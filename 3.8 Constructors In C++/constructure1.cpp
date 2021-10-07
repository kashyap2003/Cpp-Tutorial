#include <iostream>
using namespace std;

class Point
{
    double x;
    double y;

public:
        // This are pointers which will name as class.

 /*1*/   Point() {x=0; y-0; cout << "Default Called" << endl;}
 /*2*/   Point(double X, double Y) {x=X; y=Y; cout << "Parameterize Called" << endl;}
 /*3*/   Point(const Point &a) {x=a.x; y=a.y; cout << "Copy Constructure Called" << endl;}


        // Getters
        double getX() {return x;}
        double getY() {return y;}
};

int main(void)
{
    Point p1; // This is for 1.

    Point p2(1.34,4.67); // This is for 2.

    Point p3 = p1; // This is for 3.

    cout << p2.getX() << endl;
    cout << p2.getY() << endl;

}
















// CONSTRUCTURE IN C++
//=============================
// 1) Similar class name.
// 2) Automatic call when we creat an object of class.
// 3) No return type.
// 4) If not given by user compiler will creat itself.