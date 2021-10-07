// Two ways are there to do this.
// 1. Using {} this is uniform initialization and should be prefer.
// 2. Using ()

#include <iostream>
using namespace std;

class Base
{
    int x;
    
public:
    Base(int a):x{a} { }
    
    void print()
    {
        cout << x << endl;
    }

};

int main(void)
{
    Base b(23);
    b.print();
}