#include <iostream>
using namespace std;

int main(void)
{
    int i = 10;

    while (i>0)
    {
        i--;
        if (i < 5)    // In 'if', if you don't give { } in it then the 'if' omly consider it's next line as loop 
        continue;
        cout << "KAshyap" << endl;
    }
    cout << "Program end" << endl;
}
// Continue statement is only aplicable in loop(any type of loop).

// IN continue statement it just continue the process means it will don't allow the programm to go further and repeat the loop from start.