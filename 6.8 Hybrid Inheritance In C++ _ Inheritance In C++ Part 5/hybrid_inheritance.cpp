// TOPIC: Hybride Inheritance In C++

// POINTS:
// 1. Combination of multiple and hierarchical inheritance is called hybrid inheritance.

#include <iostream>
using namespace std;

class Student
{
public:
    void studing() {cout << "I am Coding" << endl;}
};
class Male
{};
class Female
{};

class Boy: public Student, public Male{};
class Girl: public Student, public Female{};

int main()
{
    Boy Kashyap;
    Kashyap.studing();

    Girl Arya;
    Arya.studing();
}