#include <iostream>
using namespace std;


void fun(int arr1[], int size1)
{
    cout << sizeof(arr1) <<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    fun(arr,size);
    cout << sizeof(arr) << endl;
}

// sizeof(arr) give us the array size which is 5*4=20 and sizeof(arr[0]) gives us the size of 0th element in array.

// so, sizeof(arr)/sixeof(arr[0]) = No. of element is in the array.