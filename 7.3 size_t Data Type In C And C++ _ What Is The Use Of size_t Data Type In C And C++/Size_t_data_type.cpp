// TOPIC: Size_t data type in C/C++

// POINTS;
// 1. It is used to represent size of objects/variables in bytes.
// 2. Sizeof returns this data type on;y
// 3. It guarante to be big enough to contain the size of the biggest object that system can handle.
//      a. If compiler is 32 bit: IT IS Typedef of unsigned int.
//      b. If compiler is 64 bit: IT IS Typedef of unsigned lomg long.
// 4. It is never negative.
// 5. Standard functions use this type for count/numbers.
//      a. malloc (size_t)
//      b. memcpy (destination, source, size_t)
//      c. size_t strlen (const char*)

#include <iostream>
using namespace std;

void print(size_t count)
{
    while (count--)
    {
        cout << "Kashyap" << endl;
    }
    
}

int main()
{
    print(5);
}