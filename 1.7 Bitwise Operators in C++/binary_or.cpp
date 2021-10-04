#include <iostream>
using namespace std;

int main(void)
{
    // BITWISE OPERATORS

    /*
    &       Binary AND Operator         IF THERE IS ANY 0 THEN ANS IS 0
    |       Binary OR Operator          IF THERE IS ANY 1 THEN ANS IS 1
    ^       Binary XOR Opreator         IF BOTH ARE 0 OR BOTH ARE 1 THEN 0, OR OTHERWISE 1 FOR 1 | 0 AND 0 | 1
    ~       Binary Once Complement      IT'S JUST AN NEGATION OF MATHS, MAKES 1 TO 0 AND 0 TO 1
    <<      Binary Left Shift           IT JUST SHIFT BINARY CODE TO LEFT SIDE (SIMPLY *2 IN ANS)
    >>      Binary Right Shift          IT JUST SHIFT BINARY CODE TO RIGHT SIDE (SIMPLY /2 IN ANS)
    */

   int a,b;
   cout << "A:";
   cin >> a;
   cout << "B:";
   cin >> b;
   cout << (a | b) << endl;

    cout << "It just give \'or\' of what you typed";
}