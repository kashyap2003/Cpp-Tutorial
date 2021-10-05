#include <iostream>
using namespace std;

int main(void)
{
    int i = 0;
    while (i<3)
    {
        int j = 0;
        while(j<2)
        {
            cout << j << endl;
            j++;
        }
        i++;
        break;
    }
    cout << "Programm Ended" << endl;
}

// Now break is only consider for 1nd while loop because it is inside 1nd while loop it don't consider 2nd while loop infact it is in 1st loop.

