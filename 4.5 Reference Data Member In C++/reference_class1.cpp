// Reference data member in C

// NOTES for experienced people:

// Use when you are OK with your data member can be changed without your Knowledge.
// Use when you don't need to impliment assignment operator in your class (This is restriction).
// If OK with, the contained object is not owned by the containing object and thus their lifetime are not bound.
// You need to ensure that the referred object is guaranteed to exits till your class object exits.


#include <iostream>
using namespace std;

class Base
{
    int &x;
public:
     Base(int &a):x{a} {}

     void print()
     {
         cout << x << endl;
     }
};

int main()
{
    int val =23;
    Base b(val);
    b.print();
    val = 15;
    b.print();
}