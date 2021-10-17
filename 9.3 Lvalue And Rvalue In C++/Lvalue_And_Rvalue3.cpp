#include <iostream>
using namespace std;

int square(int x) {return x*x;}

int main()
{
    int x = 10;
    
    int &rx = x;

    int &&rr = 20;

    cout << rx << endl;
    cout << rr << endl;
}