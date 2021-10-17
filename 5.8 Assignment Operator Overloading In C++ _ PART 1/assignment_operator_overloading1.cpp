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
};

int main()
{
    Test t1(10);
    Test t2;
    t2=t1;
    t1.setX(20);
    t1.print();
    t2.print();
}