#include <iostream>
using namespace std;

int main(void)
{
    int matrix [3] [2] = {
                          {1,2},
                          {4,5},
                          {7,8}
                         };

    int matrix1 [3][2] = {{1,2},{4,5},{7,8}};

    cout << matrix [1][1] << endl;
    cout << matrix1 [1][1] << endl;

    cout << "This wil also give us same result. The 1st one we have written for just better understanding.\nTo see the form go to the code which you are running.";

}