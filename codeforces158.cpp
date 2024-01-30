#include <bits/stdc++.h>
using namespace std;

int main (){

    int n , k , s;

    int next = 0;

    cin >> n >> k;
    vector <int> v ;

    for (int i = 0 ; i < n ; i++){

        cin >> s;
        v.push_back(s);

    }

    for (int i = 0 ; i < n ; i++){

        if ( v[i] >= v[k-1] && v[i] > 0 ){

            next++;
        }

    }
    cout << next << endl;
}
