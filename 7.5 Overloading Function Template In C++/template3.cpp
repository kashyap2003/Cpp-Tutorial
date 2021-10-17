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
template <class T1, class T2> // You can write T as anything you want. And Typename/class as you wish
T2 getmax(T1 x, T2 y)
{
    return x>y? x: y;
}

int main()
{
    int x=23, y=15;
    cout << getmax(20, 30.5) << endl; // This is giving result 30.5 because we write result as T2 and it is for Double.
    cout << getmax(30.5, 20) << endl; // This is giving result 30 because we write result as T2 and it is for int.
    char c1= 'a', c2= 'k';
    cout << getmax(c1,c2) << endl;
}