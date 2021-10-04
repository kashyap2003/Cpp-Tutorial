#include <iostream>
using namespace std;

// ALWAYS WRITE BREAK AFTER THE CASE SO THAT IT CAN STOP THERE 

// AND SWITCH IS APPLICABLE FOR CHAR AND INT ONLY THAT MEANS IT IS APPLICALE FOR ONLY INTREGRAL VALUES.

int main(void)
{
    char x;

    cin >> x;

    switch(x)
    {
        case 'a':
             cout << "This is one" << endl;
             break;
        
        case 'b':
            cout << "This is two" << endl;
            break;

        case 'c':
            cout << "This is three" << endl;
            break;

        default :
            cout << "This is default case and input is not matching" << endl;
            break;
    }
}