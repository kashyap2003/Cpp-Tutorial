// Static data members of classes in C++.
// Ans: They are attributes of classes OR class members OR class fields.

#include <iostream>
using namespace std;

class Base
{
public:
    int x;

};

int main(void)
{
    Base b1;   // Remember this also if you don't have void in class then do like this
    b1.x = 23; // Put seperate variable value for it rather than doing Base b1(23); or something.

    Base b2;
    b2.x = 15;

    cout << b1.x << endl;
    cout << b2.x << endl;
}