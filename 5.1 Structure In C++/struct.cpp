// Structure in C++

// NOTES:
// Structure in C++ is similar with class in C++, except by default access specifier in classes is private
// but public in structure.

// Example 1:
// If not declared the access in class.
#include <iostream>
using namespace std;

class Base1  // Class are default private 
{
public:
    int x;
};

struct Base2 // Struct are default public
{
    int x;
};

int main()
{
    Base1 b1;
    b1.x = 23;
    cout << b1.x << endl;

    Base2 b2;
    b2.x = 15;
    cout << b2.x << endl;
}