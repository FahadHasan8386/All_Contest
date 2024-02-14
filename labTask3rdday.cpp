#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int arr1[6];
    int arr2[6];
    int cnt = 0;


    cout << "Array 1 :";
    for (int i = 0 ; i < 6 ; i++){

        cin >> arr1[i];
    }
    cout << "Array 2 :";
    for (int i = 0 ; i < 6 ; i++){

        cin >> arr2[i];
    }
    for (int i = 0 ; i < 6 ;i++)
    {
        for (int j = 0 ; j < 6 ; j++){

            if (arr1[i] == arr2[j])
            {
            cout << arr1[i] << " ";
            cnt++;
            }


        }
    }

    if(cnt == 0){
        cout << "NO Common Element!";
    }
}
