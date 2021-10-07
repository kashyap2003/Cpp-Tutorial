#include <iostream>
using namespace std;

inline void printMe(string s)
{
    cout << s << endl;
}

int main(void)
{
    for (int i = 0; i<5; i++)
    {
        printMe("Hi Kashyap");
    }
}










// ADVANTAGES:
//============================
// 1) Function calling overhead reduced.
// 2) Variables push/pop on the stack is reduced.
// 3) Return call from a function overhead reduced.
// 4) Increases locality of refernce by utilizing instruction caches.
// 5) Once inline is done compiler can also apply intra-procedural optimization if specified.











//DISADVANTAGES:
//=======================================
// 1) If used too many inline function then code size will increase.
// 2) Compilation overhead will increse if someone change code inside inline function then all calling location will also be compiled.