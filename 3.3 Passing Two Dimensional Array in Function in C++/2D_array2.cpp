#include <iostream>
using namespace std;

// 2nd way

const int c = 2;    // This is for declaring columns.

void fun(int arr[][c], int r)
{
    for (int i= 0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout << arr[i][j];
        }
        cout << endl; // This is for the next line after 2 and 4.
    }
}

int main(void)
{
    int arr[2][2] = {{2,4},{6,8}};
    fun (arr,2);
}