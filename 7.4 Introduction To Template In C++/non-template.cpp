// TOPIC: Introduction to Template in C++

// POINTS:
// 1. There are two places where we can apply templates.
//      a. Function Templates
//      b. Class Templates
// 2. Templates are the way to write generic programs.
// 3. The main point is we pass data type as parameter to function or class.


#include <iostream>
using namespace std;

int getmax(int x, int y)
{
    return x>y? x: y;
}
int main()
{
    int x=23, y=15;
    cout << getmax(x,y) << endl;
}