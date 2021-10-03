#include <iostream>
using namespace std;

int main(void)
{
    int matrix [3] [2] = {
                          {1,2},
                          {4,5},
                          {7,8}
                         };

    int matrix1 [] [2] = {
                          {1,2},
                          {4,5},
                          {7,8}
                         };

    int matrix2 [3] [2] = {
                          1,2,
                          4,5,
                          7,8
                         };

    cout << matrix [0][0] << endl;
    cout << matrix1 [0][0] << endl;
    cout << matrix2 [0][0] << endl;

    cout << "NOTE: You can write matrix in this three diff form which will give you the same result\nTo see that three form go to programm which you are running";
}
