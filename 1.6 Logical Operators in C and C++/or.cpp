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
    cin >> b;
    if (a==10 || b==20)
    {
        cout << "Yes\n\nIf both or only one value are true then an only it will show Yes in output\nAnd you can use || more than 1 time in If statement";
    }
    else
    {
        cout << "No\n\nIf both or only one value are true then an only it will show Yes in output\nAnd you can use || more than 1 time in If statement";
    }
    
}