//  TOPIC: Overloading [] Operator In C++ (Array Subscript Operator)

// POINTS:
// 1. Array Subscript Operator can be used to check out of bound cases.
// 2. Array Subscript Operator can not be friend function and others too (->, (), =).

#include <iostream>
using namespace std;

class Point
{
    int arr[2]; // x->0, y->1 , z->2

public:
    Point(int x=0, int y=0, int z=0)
    {
        arr[0]=x;
        arr[1]=y;
        arr[2]=z;
    }

    void print() 
    {
        cout << "X: " << arr[0] << endl << "Y: " << arr[1] << endl << "Z: " << arr[2] << endl;
    }
};

int main() 
{
    Point p1(6,3,4);
    p1.print();  
}