#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    cout << sizeof(arr) << endl;

    cout << "It is giving ans 20 Because we know that int carry 4 bytes and in array it contain 5 element.\nSo, 4*5 = 20 as simple as that";
}