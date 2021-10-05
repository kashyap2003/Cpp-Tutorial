#include <iostream>
using namespace std;

int main(void)
{
    int i = 0;
    while(i<10)
    {
        if (i == 5)
        {
            break;
        }
        cout << "i: " << i << endl;
        i++;
    }
    cout << "Programm Breaks" << endl;
}

    // Breaks statement can only use in loop it can not be used outside of the loop.