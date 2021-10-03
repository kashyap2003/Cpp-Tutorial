#include <iostream>
using namespace std;

int main(void)
{
    int a,b;
    cout << "NOTE: See how modula(%) works.\nIf in a%b, a=b then ans always be zero.\nIf in a%b, b>a then ans will always be a.\nAnd if in a%b, a>b then we will count the table of b until it,s value is equal or less than a and than minus that value to a to get the result." << endl;

    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << a%b << endl; // It will just give you the reminder of the term.

}