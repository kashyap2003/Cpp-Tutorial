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
        cout << "\nX: " << arr[0] << endl << "Y: " << arr[1] << endl << "Z: " << arr[2] << endl;
    }
    // This is an Subscript Operator.
    int &operator [] (int pos) // This pos is the position we are trying to access using [] operator with p1.
    {                           // And it will passed to this function automatically.
        if (pos == 0)
            return arr[0];
        if (pos == 1)
            return arr[1];
        if (pos == 2)
            return arr[2];
        else
        {
            cout << "\nOut of bound";
            exit(0);
        }
    }
};

int main() 
{
    Point p1(6,3,4);
    p1.print();  

    printf("*****************");

    p1[0] = 7; // We have to provide an subscript operator to this.
    p1[1] = 4; // We have to provide an subscript operator to this.
    p1[2] = 9; // We have to provide an subscript operator to this.

    p1.print();

    printf("*****************");

    p1[3] = 10; // This will just go out of bound.

    p1.print(); // After printing this code just exit due to exit(0) so nothing will run after this.

    cout << "Hiiiiii" << endl; // This will not get printed because program just exit.
    
}