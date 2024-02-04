#include <bits/stdc++.h>
using namespace std;
int main (){

    int sz1 = 5;
    int sz2 = 8;

    int arr1[sz1] = {10 ,20 ,30 ,40 ,50};
    int arr2[sz2] = {1 ,2, 3, 4, 5, 6, 7,8};

    int marcharray[(sz1 + sz2)];


    for (int i = 0 ; i < sz1 ; i++)
    {

        marcharray[i] = arr1[i];

            cout << marcharray[i] << " ";

    }
    for (int i = sz1 ; i < (sz1 + sz2 ) ; i++)
    {

        marcharray[i] = arr2[i - sz1];

            cout << marcharray[i] << " " ;

    }
    cout << endl;
    for (int i = (sz1 + sz2 -1 ); i >= 0 ; i--)
    {

        marcharray[i];

            cout << marcharray[i] << "  ";

    }
}
