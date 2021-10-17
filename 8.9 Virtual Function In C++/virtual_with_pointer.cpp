// TOPIC: Introduction To Virtual Function

// NOTES:
// 1. Why to use Virtual Function?
//    a. To achieve dynamic polymorphism. Which is the abality to call Derived class function using Base class pointer or reference.

// 2. HOW to use virtual function/
//    a. By declaring function as virtual in Base class and Overriding that function in Derived class.
//      (Function signiture should be same in Base and Derived class)
//    b. Declare a function as virtual in Base class is enough, Derived class function need not to be declare virtual.
//    c. Virtual function should be accessed using pointer(*) or reference(&) of Base class type to achive runtime polymorphism.

// ADDITIONAL NOTES
// 1. Virtual function cannot be static and also cannot be a friend function of another class.
// 2. A class can have virtual disturctor but can't have virtual constructor.
// 3. There are two types of virtusl functions in C++
//    a. Virtual Function
//    b. Pure Virtual Function 

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout << "I am Base Function" << endl;
    }
};

class Derived: public Base
{
public:
    void fun()
    {
        cout << "I am Derived Function" << endl;
    }
};

int main()
{
    Base *b = new Derived();
    b->fun();
}