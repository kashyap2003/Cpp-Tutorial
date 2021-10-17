// TOPIC: Multiple Inheritance In C++!!

// POINTS:
// 1. A derived class with multiple base class is called multiple inheritance.
// 2. There is a ambiguity problem in mutliple Inheritance.


#include <iostream>
using namespace std;

class Coder
{
public:
    Coder(int x) {cout << "Coder" << endl;}
};

class Engineer
{
public:
    Engineer(int y) {cout << "Engineer" << endl;}
};

class Kashyap: public Coder, public Engineer
{
public:
    Kashyap(int x, int y):Coder(x), Engineer(y) {cout << "Kashyap" << endl;}
};

int main()
{
    Kashyap k1(1,2);
}