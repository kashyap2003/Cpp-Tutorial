// TOPIC: Mutilevel Inheritance in C++

// POINTS:
// 1. If derived class is again Derived into some another class then it is called multilevel inhertance.
// 2. Remember: We only derive a class when we can satisfy Is-A relation with base class.

#include <iostream>
using namespace std;

class Animal {};
class Cat: public Animal {};
class RussianBlue: public Cat {};

int main()
{

}