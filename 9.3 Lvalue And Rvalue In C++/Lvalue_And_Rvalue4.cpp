#include <iostream>
using namespace std;

int square(int x) {return x*x;}

int main()
{
    int x = 10;
    
    int &rx = x;

    int &&rr = 20;

    const int &i = 20; // This also valid for programm.

    cout << rx << endl;
    cout << rr << endl;
    cout << i << endl;
}