#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {1 ,2 ,3, 4 ,5 ,6 , 7, 8 ,9 };

    int sumof1strow = 0;
    int sumof3throw = 0;
    int sumof2ndrow = 0;
    int sum = 0;

    for (int i = 0 , j = 0 ; j < 3 ; j++){

        sumof1strow += arr[i][j];
    }
        cout << sumof1strow << endl;

    for (int i = 1 ,j = 0 ; j < 3 ; j++){

        if (i != j){
            sumof2ndrow += arr[i][j];
        }
    }
        cout << sumof2ndrow << endl;
    for (int i = (3 - 1) ,j = 0 ; j < 3 ;j++){

        sumof3throw += arr[i][j];
    }
        cout << sumof3throw <<endl;

        cout << "Sum Of Border line = " << sumof1strow + sumof2ndrow + sumof3throw ;
}
