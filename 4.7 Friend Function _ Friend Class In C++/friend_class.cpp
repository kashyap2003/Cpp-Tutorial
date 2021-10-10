// Friend function and Friend Class In C++

// NOTES:
// 1. Keyword "friend" is used to make some [function OR class] as friend of your class.
// 2. Friend function OR Friend class can access private/public/protected Data Member OR Member function of another class.
// 3. Function can not become friend of another function.
// 4. Class can not become friend of function.
// 5. Friendship is not mutual. If a Class A is friend of B, Then B dosen't become friend of A automatically.
// 6. Friendship is not inherited.

#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    Base() {}
    Base(int a):x{a} {}
    friend class Getset; // It just access this class in another class 
};

class Getset
{
public:
    void set(Base &obj, int x) {obj.x = x;} // obj.x in this, x is of class Base.
    int get(Base &obj) {return obj.x;}
};

int main()
{
    Base obj(23); // Going to int get and then return.
    Getset gs;
    cout << gs.get(obj) << endl;
    gs.set(obj,15); // Going to void set.
    cout << gs.get(obj) << endl;

}