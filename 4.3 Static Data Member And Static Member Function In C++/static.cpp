// Static data members of classes in C++.
// Ans: They are attributes of classes OR class members OR class fields.

#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    static int y;

};
// Static data member is belong to class. That's why we need to create a memory for static function.

int Base:: y; // Memory for y Bacause of static function.

int main(void)
{
    Base b1;
    b1.x = 10;
    b1.y = 30;

    Base b2;
    b2.x = 20;
    b2.y = 40;

    cout << b1.x << " " << b1.y << endl;
    cout << b2.x << " " << b2.y << endl;
    cout << "It just over writting the value of Y in memory beacuse for Y it has only one memory.\nSo, it just save the last value of y in memory";
}