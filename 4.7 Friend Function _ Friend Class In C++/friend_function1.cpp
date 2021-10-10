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
protected: // This protected also can axes outside the class through friend function.
    int x;

public:
    Base() {}
    Base(int a):x{a} {}
    friend void set(Base &obj, int x);  // It just help function to organize outside the class.
    friend int get(Base &obj); // Just type friend before the function you want outside the class, which class will run.
};

void set(Base &obj, int x) 
{
    /*this x is of class x*/ obj.x = x; /* This x is of void x*/
}

int get(Base &obj)
{
    return obj.x; // This x is of class x.
}

int main()
{
    Base obj(10); // This is going to int get.
    cout << get(obj) << endl;
    set(obj,20); // This is going to void get.
    cout << get(obj) << endl;
}