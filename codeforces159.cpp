#include<bits/stdc++.h>
using namespace std;
int main(){

    int n , X = 0 ;
    char s [2];

        cin >> n;

    for (int i = 0 ; i < n ;i++){

        cin >> s[i];

        if (s[i] == '++'){
            X++;
        }
        else if(s[i] == '--') {
            X--;
        }
    }
        cout << X;


}
