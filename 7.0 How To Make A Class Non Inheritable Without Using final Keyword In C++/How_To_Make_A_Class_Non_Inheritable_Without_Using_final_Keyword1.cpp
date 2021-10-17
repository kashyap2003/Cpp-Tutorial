// TOPIC: Make call non-inheritance without using final keyword in C++!

// REQUIRMENT:
// 1. We need one class which will make our class as final class.
// Lets call that class Final class.

// SOLUTION:
// a. Make default constructor of Final class as private.
// b. Inheritance Final class as virtual in our class which we want to make non-inheritable.
// c. Make our class as friend imside Final class.
//    (So that only our class can call the constructor of Final class, not the derived class)


#include <iostream>
using namespace std;

class Final 
{
private:
    Final() {}
    friend class Base;
};

// class Base:public Final // If you write Virtual Public Final then it will not run. Like given in below comment.
// {
// public:
//     Base() {}
// };

class Base:virtual public Final 
{
public:
    Base() {}
};


// class Derived: public Base
// {
// public:
//     Derived() {}
// };

int main()
{
    // Derived d;
    Base b;
}