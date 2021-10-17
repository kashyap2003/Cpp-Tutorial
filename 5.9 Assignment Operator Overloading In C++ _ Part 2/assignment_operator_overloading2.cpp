// TOPIC: Assignment Operator Overloading in C++

// POINTS:
// 1. When we should we write our own assignment operator in C++?
// 2. This comes under binary operator overloading?
// 3. When we need deep copy, Assignment operator must be overloaded.
// 4. We shouls also create own copy constructor when assignment operator and vice versa.

// FUNCTION POINTS
// 1. Check self assignment because it is dangerous (We will discuss)
// 2. Assignment Operator must be overloaded by non-static member function only.

#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    Base(int x=0):x{x} {}
    friend class Test;
};

class Test
{
    int *x;

public:
    Test(int val=0):x{new int(val)} {}
    void setX(int val) {*x=val;}
    void print() {cout << "OUTPUT: " << *x << endl;}
    ~Test() {delete x;}

    Test &operator = (const Test &rhs)
    {
        if(this != &rhs)
            *x = *rhs.x;
        return *this;
    }

    Test &operator = (const Base &rhs)
    {
        *x = rhs.x;
        return *this;
    }

    Test(const Test &rhs)
    {
        x = new int(*rhs.x);
    }
};

int main()
{
    Test t1(10), t2, t3;
    (t2=t3) = t1;
    t1.print();
    t2.print();
    t3.print();
}
