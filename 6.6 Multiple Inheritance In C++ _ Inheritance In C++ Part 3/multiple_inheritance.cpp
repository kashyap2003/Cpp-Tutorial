// TOPIC: Multiple Inheritance In C++!!

// POINTS:
// 1. A derived class with multiple base class is called multiple inheritance.
// 2. There is a ambiguity problem in mutliple Inheritance.

#include <iostream>
using namespace std;

class Coder
{
public:
    Coder() {cout << "Coder" << endl;}
};

class Engineer
{
public:
    Engineer() {cout << "Engineer" << endl;}
};

class Kashyap: public Coder, public Engineer
{
public:
    Kashyap() {cout << "Kashyap" << endl;}
};

int main()
{
    Kashyap k1;
}