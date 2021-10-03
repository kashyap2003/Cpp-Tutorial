#include <iostream>
using namespace std;

int main(void)
{
    // Signs in programm

    /*
     ==     Equal
     !=     Not Equal
     >      Greater than
     >=     Greater than or Equal
     <      Less than 
     <=     Less than or Equal
      */

    int a, b;
    cout << "A:";
    cin >> a;
    cout << "B:";
    cin >> b;

    if (a==b)
    {
        cout << "Equal" << endl;
    }
    else if (a>b)
    {
        cout << "A is grater than B" << endl;
    }
    else
    {
        cout << "B is greater than A" << endl;
        
    }
    cout << "If you wanna to see signs then see the programm";
}