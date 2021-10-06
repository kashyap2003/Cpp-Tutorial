#include <iostream>
using namespace std;

// 3st way

void fun(int *arr, int r, int c)
{
    for (int i= 0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout << *(arr+i*c+j);
        }
        cout << endl; // This is for the next line after 2 and 4.
    }
}

int main(void)
{
    int arr[2][2] = {{2,4},{6,8}};
    fun ((int*)arr,2,2);
}