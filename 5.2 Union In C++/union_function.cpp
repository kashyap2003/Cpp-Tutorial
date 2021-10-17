// Union In C++

// NOTES:

// 1. Just like classes and structures a union is a user defined data type.
// 2. In union, all members share the biggest memory location.
// 3. This is used to achieve polymorphism in C.

// Possible Usage?
// 1. When we need only one value ou tof many at that time we will use it. (Example: Square class)
// 2. Get the actual data in parts.(Example: int value, char bytes[4])

#include <iostream>
using namespace std;

union Square
{
    int weight;
    int height;
};

int getArea(int weight, int height)
{
    return weight*height;
}

int main()
{
    Square sqr;
    sqr.weight = 20; // Height is also pointing to this 20 only.So we don't need to put height anything it automatically become 20.
    cout << getArea(sqr.weight, sqr.height);
}