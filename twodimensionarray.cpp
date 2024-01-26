#include<iostream>
using namespace std;
int main (){

    //single diclaretion
    /*int A [3][4];
        A[0][0] = 5;

            cout << A[0][0];*/



    //All elements diclaretion
    int A [3][4] = {
                {1 , 2 , 3, 4},
                {5 , 6 , 7 , 8},
                {9 , 10 ,11 , 12}
                };


    for (int row = 0 ; row < 3 ; row++){

        for (int col = 0 ; col < 4 ; col++){

            cout << A[row][col] << " " ;

        }

        cout << endl;
    }

}
