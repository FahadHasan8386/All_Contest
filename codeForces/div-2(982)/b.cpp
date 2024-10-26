#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;
    int cnt = 0 ;
    while(t--)
    {
        int  n;
        cin >> n;

        vector<int>v(n);

        for(int i = 0 ; i < n ;i++)
        {
            cin >> v[i];
        }
        for(int i = 1 ; i < n-1 ;i++)
        {
            if(v[i-1] < v[i])
            {
                v.erase(v.begin());
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
