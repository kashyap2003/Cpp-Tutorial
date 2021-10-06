// POINTS:

// 1. C++ allows to overload member functions on the basis of const and non-const.
// 2. Const parameter allows to overload member functions and normal function but it should be reference/pointer.

// Worked on point 1.

#include <iostream>
using namespace std;

class Test
{
    int x;

public:
    Test (int x=0): x{x} {}

    void print()
    {
        cout << "Non Const" << endl;
    }

    void print() const
    {
        cout << "Const" << endl;
    }
};

int main(void)
{
    Test t1;
    const Test t2;
    t1.print();
    t2.print();
}