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

union Myunion
{
    char bytes[4];
    unsigned int value;
};

int main()
{
    Myunion uni;
    uni.value = 0;

    uni.value = 2;

    cout << uni.bytes[0] << endl;
    cout << uni.bytes[1] << endl;
    cout << uni.bytes[2] << endl;
    cout << uni.bytes[3] << endl;
}