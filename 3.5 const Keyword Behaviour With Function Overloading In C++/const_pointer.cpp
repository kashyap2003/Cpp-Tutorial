// POINTS:

// 1. C++ allows to overload member functions on the basis of const and non-const.
// 2. Const parameter allows to overload member functions and normal function but it should be reference/pointer.

// Worked on point 2.

#include <iostream>
using namespace std;

class Test
{
    int x;

public:
    Test (int x=0): x{x} {}

    void print(int *val)
    {
        cout << *val << endl;
    }

    void print(const int *val)
    {
        cout << *val << endl;
    }
};

int main(void)
{
    Test t;
    int k = 10;
    const int p = 20;
    t.print(&k);
    t.print(&p);
}