#include <iostream>
using namespace std;

void update(int &x)
{
    x = x +10;
}

int main(void)
{
    int a = 10;
    cout << "A before change: " << a << endl;
    update(a);
    cout << "A after change: " << a << endl;
}

// Note: reference(&) overwrite the memeory that is why a ans is 20 after going in the reference(&)