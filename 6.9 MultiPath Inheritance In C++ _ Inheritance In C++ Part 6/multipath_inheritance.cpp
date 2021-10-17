// TOPIC: Multiple INheritance In C++

// POINTS:
// 1. A derived class with two base classes and these two base classes have one common base class is called mutipath inheritance.

#include <iostream>
using namespace std;

class Human
{
public:
    void breating() {cout << "I am Breathing" << endl;}
};
class Coder: public virtual Human{}; // We have to add virtual because of ambiguous error.
class Engineer: public virtual Human{}; // We have to add virtual because of ambiguous error.
class Kashyap: public Coder, public Engineer{};

int main()
{
    Kashyap k;
    k.breating();
}