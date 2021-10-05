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
    }
    cout << "Programm Ended" << endl;
}

// See it will go to 2nd while loop which gives 0 and 1, and then it will repeat it 3 times so see clearly if you don't get it.