#include <iostream>
using namespace std;

// CLASS FUNCTION
// class Pdsvsdv{}; Remember 1st letter is always capial in class.

class Phone // Class name will always start with capital letter
{
    string p_name;
    string p_size;

public:  // If you don't write public then compiler will think that it is private automatically.
        // And without declaring it public it will not run outside the class function.
    Phone(string name, string size) // This is an constructure. And cnster name is always the class name.
    {
        p_name = name;
        p_size = size;
    }

    void makecall()
    {
        cout << "Making call Using: " << p_name << endl;
    }

    void receivecall()
    {
        cout << "Receiving Call Using: " << p_name << endl;
    }
};

int main(void)
{
    Phone samsung("Samsung_j6", "720x1480"); // THIS JUST MODEL OF PHONE OR YOU CAN PUT ANYTHING IN IT AND THE NAME AND SIZE OF PHONE INSIDE IT.
    samsung.makecall();     // THIS TO JUST TO MAKECALL WITH SAMSUMG.
    samsung.receivecall();  // THIS TO JUST TO RECEIVECALL WITH SAMSUMG.
}