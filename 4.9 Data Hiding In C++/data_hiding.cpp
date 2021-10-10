// Data Hiding in C++

// DATA HIDING
// 1. Data hiding is about data member in classes, we keep data members as private (Generally) and this is 
//    this is considered as data hiding.
//    >> It is not about hacking or something, it is about correctness of data  and preventing accidental manipulation.
//    Example : Audio player volume increase.

#include <iostream>
using namespace std;

class MusicPlayer
{
    int volume;

public:
    MusicPlayer():volume{0} {}
    void setVolume(int x)
    {
        if(x>=0 && x<=100)
        {    
            volume = x;
        
            cout << "Set" << endl;
        }
          else
            {
                cout << "Can't Set" << endl;
            }

    }
};

int main()
{
    MusicPlayer abc;
    abc.setVolume(75);
    abc.setVolume(-45);
}