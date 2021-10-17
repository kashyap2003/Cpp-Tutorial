// TOPIC: Pure Virtual function

// SYNTAX: Virtual returntype functionname(parameters...) = 0;

// NOTES:
// 1. If soem class can have only signiture of funtion but not the body then we use pure virtual functions.
// 2. Sometimes in Base calss we know the function name bo=ut not the definition of the function.,
//    so we want Derived classes to provide the definition of the function.
// 3. We can actually give body of pure virtual function.
// 4. If you have pure virtual function in your class, it means that class is an Abstract class and
//    you can't create an object of that class. (But pointer and Reference can be created)

// USE CASE:
/// 1. Used to create abstract classes, which helps in creating interfaces (APIs)

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void move() = 0; // It is a pure Virtual function It will run only if every member have move() function.
};

class Cat: public Animal
{
public:
    void move()
    {
        cout << "I walk and run" << endl;
    }
};

class Snake : public Animal
{
public:
    void move()
    {
        cout << "I do Rectiliner Locomotion" << endl;
    }
};

int main()
{
    Cat *c;
    c->move();
}