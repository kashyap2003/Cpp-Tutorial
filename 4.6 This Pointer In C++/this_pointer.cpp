// This pointer in C++

// NOTES:
// 1. This pointer is used to hold the address of current object (using which we have called particular member function).
// 2. This pointer is const pointer.
// 3. This pointer is passed as a hidden argument to non-static member function.
// 4. Compiler automatically change all data member access with this pointer.
// 5. It is not passing in static member function.


#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    Base() {}
    Base(int a):x{a} {}
    
    // Our compiler will internally achive this but we can also write this.

    int get() { return this->x;}  // this-> Will hold the address of respective object.
    
    void set(int a) {this->x=a;}  // this-> Will hold the address of respective object.
};

int main()
{
    Base b1;
    Base b2(23);

    cout << b2.get() << endl;
}