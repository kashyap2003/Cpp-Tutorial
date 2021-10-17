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

class Base
{
public:
    virtual void fun() {cout << "Base" << endl;}
};

class Derived:public Base
{
public:
    void fun(int x) {cout << "Derived" << endl;}
}; 

int main()
{
    Base *b = new Derived();
    b->fun();
}