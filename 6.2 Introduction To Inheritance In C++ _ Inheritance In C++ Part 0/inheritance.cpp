// TOPIC: Inheritance In C++ (Core Feature of OOP)

// Q. What it does?
// A. Its inherits the features/properties/characterstics of Base class into Derived class.
//    a. Code Reuseability

// TERMINOLOGY: Base/Derived  OR  Parent/Child

// TYES OF INHERITANCE:
// 1. Single
//    A Derived class with only one base class is called single inheritance.
// 2. Multilevel
//    A Derived class with a base class and that base class is a derived class of another, is called multilevel inheritance.
// 3. Multiple
//    A Derived class with multiple base class is called multiple inheritance.
// 4. Heirarchical
//    Mutliple Derived classes with same base class is called heirarchical inheritance.
// 5. Hybride
//    Combination of multiple and Heirarchical inheritance is called Hybride inheritance.
// 6. Multipath
//    A Derived class with two base classes and these two base classes have one common base class is called multipath inheritance.

// MODES OF INHERITANCE:
// 1. Public (Visible to everyone)
// 2. Protected (Visible to current class and derived class only)
// 3. Private (Visible to current class only)

//----------------------------------------------------------------
// BASE CLASS | DERIVED CLASS    DERIVED CLASS    DERIVED CLASS  |
//----------------------------------------------------------------
//              Public MODE      Private MODE     Protected MODE |        <<<------   Inheritance Mode
//----------------------------------------------------------------
// Private      Not Inherited    Not Inherited    Not Inherited  |
// Protected    Protected        Private          Protected      |
// Public       Public           Private          Protedted      |
//----------------------------------------------------------------



#include <iostream>
using namespace std;

class Base
{
public:
    int x;
};

class Derived: public Base // : This is the symbol of inheritance after that write mode of inheritance and then write name of class what you have to inherite.
{
public:
    void print() {cout << x << endl;}
};

int main()
{
    Derived d;
    d.print();
}