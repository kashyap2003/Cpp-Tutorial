// TOPIC: Introduction to Template in C++

// POINTS:
// 1. There are two places where we can apply templates.
//      a. Function Templates
//      b. Class Templates
// 2. Templates are the way to write generic programs.
// 3. The main point is we pass data type as parameter to function or class.

// Example of max function.

#include <iostream>
using namespace std;

// Template will convert itself into int if function is in int and change for other functions too.
template <class T1, class T2> // This class t1 and t2 for int and double as given.
auto getmax(T1 x, T2 y) // Auto will find the return type automatically.
{
    return x>y? x: y;
}

int main()
{
    int x=23, y=15;
    cout << getmax(20, 30.5) << endl; 
    cout << getmax(30, 20.5) << endl; 

}