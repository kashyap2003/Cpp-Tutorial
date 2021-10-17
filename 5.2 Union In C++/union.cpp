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

// Union don't have constructor or Destructor it only store value.

union myUnoin // Unon take the biggest data member size and it will make every diff diff data member to point that memory only.
{
    int x;
    short y;
    char c;
};


int main()
{
    printf("It will print nothing it 's just an example.");
}
