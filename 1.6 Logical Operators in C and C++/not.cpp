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
    if (!a)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    cout << "In this !(not) operator it will show true only when a=0 because not means 0 in number line\nAnd if you put any no. other than 0 in it then it e=will show No in output" << endl;
    
}