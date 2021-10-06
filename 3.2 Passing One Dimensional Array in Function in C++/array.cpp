#include <iostream>
using namespace std;

// It just tell us what sre the elements inside the array.

void fun(int arr[], int size)
{
    for (int i=0; i<size; i++)
    cout << arr[i] << endl;
}

int main(void)
{
    int arr[] = {1,2,6,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    fun(arr, size);
}

// sizeof(arr) give us the array size which is 5*4=20 and sizeof(arr[0]) gives us the size of 0th element in array.

// so, sizeof(arr)/sixeof(arr[0]) = No. of element is in the array.