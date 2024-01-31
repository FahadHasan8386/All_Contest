#include <bits/stdc++.h>
using namespace std;

int main (){

    int num[6];
    int total_even = 0;
    int total_odd = 0;

        cout << " Enter Six Integer :";

    for (int i = 0 ; i < 6 ; i++){

        cin >>num[i];
        }

    for (int i = 0 ; i < 6 ; i++){

        cout << "arr[" << i << "] = " << num[i] ;

        if (num[i] % 2 == 0){

            cout << ", even";
            total_even++;
        }
        else{

            cout << ", odd";
            total_odd++;
        }
            cout << endl;

    }
        cout << "Total Even = " << total_even << endl;
        cout << "Total Odd  = " << total_odd << endl;

}
