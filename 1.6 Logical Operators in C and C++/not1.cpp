#include <iostream>
using namespace std;

int main(void)
{
    // Logical Operator

    /*
    AND -->  &&
    OR  -->  ||
    NOT -->  !
    */

    int a,b;
    cout << "A:";
    cin >> a;
    cout << "B:";
    cin>> b;
    if (!(a>b))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    cout << "In this !(not) operator it will show true only when our statement is not true\nSee we have put !(a>b) in if statement, if a>b then it will show NO for it. And YES for all other Combinations " << endl;
    
}