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

class Coder: public Human
{
public:
    void work() {cout << "Making Codes" << endl;}
};

class Engineer: public Human
{
public:
    void work() {cout << "Making Project" << endl;}
};

class Doctor: public Human
{
public:
    void work() {cout << "Saving Life" << endl;}
};

int main()
{
    Coder c;
    c.breathing(); c.work();
    Engineer e;
    e.breathing(); e.work();
    Doctor d;
    d.breathing(); d.work();
}