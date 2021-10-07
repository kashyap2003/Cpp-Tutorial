#include <iostream>
using namespace std;

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
        cout << "Making Call Phone Size: " << p_size << endl;
    }

    void receivecall()
    {
        cout << "Receiving Call Using: " << p_name << endl;
         cout << "Receiving Call PHone size: " << p_size << endl;
    }
};

int main(void)
{
    Phone samsung("Samsung_j6", "720x1480");
    samsung.makecall();     // This is just to makecall with samsung.

    cout <<"********************************************************" << endl;
    
    Phone iphone("Iphone_X", "720x1480");
    iphone.receivecall();   // this is just to receive call with iphone.
}