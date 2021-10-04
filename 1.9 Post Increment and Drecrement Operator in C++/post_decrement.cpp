#include <iostream>
using namespace std;

int main(void)
{
    int a,b,c;
    cout << "A:";
    cin >> a;
    b=a--;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    cout << "See the result the value of a is only decremented and the value of b remain same\nThis is because in post decrement b=a-- is replace by this two expresion\nb=a and a=a-1 that is why it only decrement the value of a";
}