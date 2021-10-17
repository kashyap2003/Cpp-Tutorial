// TOPIC: How to Initialize Base Class data Member from Derived class Constructor In C++

// POINTS:
// 1. Default Constructur of Base class is called Automatically. (If we don't call)
//    But if we want to call parameterize constructure then we have to call it explictily.

#include <iostream>
using namespace std;

class Base
{
    int x;
public:
    Base() {cout << "Base Default" << endl;}
    Base(int x):x{x} {cout << "Base Parameterize" << endl;}
};

class Derived: public Base
{
    int y;
public:
// You can write this :Base() or leave it because compiler will automatically call the default base class constructure.
    Derived(): Base() {cout << "Derived Default" << endl;}
    // This :Base(x) is for calling the base class constructure.
    Derived(int x, int y):Base(x), y{y} {cout << "Derived Parameterize" << endl; } 
};

int main()
{
 Derived d(1,2);
 Derived d1;
}