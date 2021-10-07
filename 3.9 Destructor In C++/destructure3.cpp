#include <iostream>
using namespace std;

class Base
{
    int *x;
public:
    Base():x{nullptr} {cout << "Default Constructure" << endl;}
    Base(int *a):x{a} {cout << "Parameterise Constructure" << endl;}
    ~Base() {delete x ; cout << "Destructure" << endl;}  // This is destructure it starts with ~ and name as class.
};

int main(void)
{
    Base b(new int(10));  // It will go to P.Cnster and destr.cnster.
}























// DESTRUCTOR IN C++
//===========================================
// 1) This is a special member funstion with same name as class with ~ at front.
// 2) Used to destruct the memory of object which was constructed by constructur.
// 3) Destructors get called automatically (implicit call), as constructor was.
// 4) We can call destructors explicitly but that is not good practice.
// 5) The only place where you will call destructors explicitly is after placement new (this is little advance topic). 