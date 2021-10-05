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
            if (j == 1)
            {
                break;
            }
            cout << j << endl;
            j++;
        }
        i++;
    }
    cout << "Programm Ended" << endl;
}

// Now break is only consider for 2nd while loop because it is inside 2nd while loop.

