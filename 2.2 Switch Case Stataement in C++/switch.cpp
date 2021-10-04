#include <iostream>
using namespace std;

// ALWAYS WRITE BREAK AFTER THE CASE SO THAT IT CAN STOP THERE 

int main(void)
{
    int a;

    cin >> a;

    switch(a)
    {
        case 1:
             cout << "This is one" << endl;
             break;
        
        case 2:
            cout << "This is two" << endl;
            break;

        case 3:
            cout << "This is three" << endl;
            break;

        default :
            cout << "This is default case and input is not matching" << endl;
            break;
    }
}