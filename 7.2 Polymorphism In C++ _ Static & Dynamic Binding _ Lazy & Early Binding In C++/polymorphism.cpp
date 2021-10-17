// TOPIC: Polymorphism In C++!! (Very Important Feature In OOP)

// POINTS:
// There are teo types of Polymorphism
// A. Compile Time Polymorphism / Staic Binding / Early Binding
//      a. Function Overloading
//      b. Operator Overloading
// B. Runtimw Polymorphism / Dynamic Binding / Lazy Binding
//      a. Function Overriding (Using Virtual Functions)

#include <iostream>
using namespace std;

class Test
{
public:
    void fun(int x) {cout << "Intrger" << endl;}
    void fun(double x) {cout << "Double" << endl;}
};

int main()
{
    Test t;
    t.fun(23);
    t.fun(23.3);
}