// TOPIC: Hierarchical Inheritance In C++

// POINTS:
// 1. Multiple derived classes with same base class is called hierarchical Inheritance.

#include <iostream>
using namespace std;

class Human
{
public:
    void breathing() {cout << "I am Breathing" << endl;}
};

class Coder: public Human{};
class Engineer: public Human{};
class Doctor: public Human{};

int main()
{
    Coder c;
    c.breathing();
    Engineer e;
    e.breathing();
    Doctor d;
    d.breathing();
}