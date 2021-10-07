// Two ways are there to do this.
// 1. Using {} this is uniform initialization and should be prefer.
// 2. Using ()

#include <iostream>
using namespace std;

class Base
{
    int x;
    char y;
    
public:
    Base(int a, char b):x{a}, y{b} { }
    
    void print()
    {
        cout << x << endl;
        cout << y << endl;
    }

};

int main(void)
{
    Base b(23,'K'); // We have just putten the value to class Base in it.
    b.print();  // This will take the value of Base b to the void print.
}