#include <iostream>
using namespace std;

void kashyap(int x)
{
    cout << "x: " << x << endl;
}

int main(void)
{
    int a =  10;

    kashyap (20);

    cout << "a: " << a << endl;

    cout << "NOTE: You can call that update value anything as you wish see in this code i have called it as kashyap there is no problem in it.";
}

//You can also directly pass the value in update.

// See what is happening here is that code will go to through int 1st and then in int there is update which is directed it to go to the next update with the same as given in the 1st update value so it will run first 2nd update and after running the 2nd update it will return to the 1st update and run the line next to the 1st update.