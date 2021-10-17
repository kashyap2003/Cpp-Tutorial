#include <iostream>
using namespace std;

int square(int x) {return x*x;}

int main()
{
    int x = 10;
    int a = 2, b = 3;
    int p = square(10); // You can not write it as given in below comment
    //int *p = &square(10);

    cout << p << endl; // Remember if you don't write "usimg namespace std;" in code then cout or cin will not work
    
}