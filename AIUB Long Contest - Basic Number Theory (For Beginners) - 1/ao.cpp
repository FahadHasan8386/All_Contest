///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a ,b;
    cin >> a >> b;

    if(b != 1)
    {
        cout << "YES" << endl;
        cout << (a*b) <<" " << a << " " <<(b+1ll )*a << endl;
        return;
    }else{
        cout << "NO" << endl;
        return;
    }
}

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}
