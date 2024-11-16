#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int tt;
    cin >> tt;

    while(tt--)
    {
        int n;
        cin >> n;

        vector<int>v(n);

        for(int i = 0 ; i < n ;i++) cin >> v[i];

        map<int,int>m;
        for(int i = 0 ; i < n ;i++) m[v[i]]++;

        int feq = 0;
        for (auto &i : m) feq = max(feq , i.second);


        cout << n - feq << endl;
    }

    return 0;
}
