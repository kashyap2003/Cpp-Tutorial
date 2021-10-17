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
template <class T> // You can write T as anything you want. And Typename/class as you wish
T getmax(T x, T y)
{
    return x>y? x: y;
}

int main()
{
    int x=23, y=15;
    cout << getmax(x,y) << endl; // We are written here <int> because template will change itself in it.
    char c1= 'a', c2= 'k';
    cout << getmax(c1,c2) << endl;
}