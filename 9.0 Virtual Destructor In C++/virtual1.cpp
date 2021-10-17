// TOPIC: Virtual Destructor

// NOTES:
// 1. If we delete child class object through a pointer of parent class then it is undefined behaviour.
//    If parent class doesn't have virtual destructor.
// 2. If we fail to declare destructor as virtual in parent class then we endup having memory leak.


#include <iostream>
using namespace std;

class Base
{
public:
    Base() {cout << "Ctor Base" << endl;}
    virtual ~Base() {cout << "Dtor Base" << endl;}
};

class Derived: public Base
{
public:
    Derived() {cout << "Ctor Derived" << endl;}
    ~Derived() {cout << "Dtor Derived" << endl;}
};

int main()
{
    Derived *b = new Derived();
    delete b;
}