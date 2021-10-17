#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int a = 2, b = 3;
    int *p = &(a); // You can not write this as It given in below comment.
    //int *p = &(a+b);
    
    cout << p << endl;
}