#include <iostream>
using namespace std;

int main(void)
{
    int number[] = {1,2,3,4,5};
    cout << number[4] << endl;

    cout << "NOTE: If you want an output of your 5th no. then you should give an input of 4th no. because array numbering starts with 0 not from 1 so if you stored 5 no. then the 5 no. are stored at the place of {0 1 2 3 4}\n So, just do an input of (printing no = printing no -1)" << endl;
}