#include <iostream>
using namespace std;
int main (){

    int A [3][3];
    //User Input
    for (int row = 0 ; row < 3 ; row++){

        for (int col = 0 ; col < 3 ; col++){

            cout << "A [" << row << "][" << col << "] = " ;
            cin >> A[row][col];
        }
        cout << endl;
    }
    //Output
    for (int row = 0 ; row < 3 ; row++){

        for (int col = 0 ; col < 3 ; col++){

             cout << A[row][col];
        }
        cout << endl;
    }
}
