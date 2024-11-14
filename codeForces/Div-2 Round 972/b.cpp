#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, q;
        cin >> n >> m >> q;

        int t1, t2;
        cin >> t1 >> t2;

        if(t1 > t2)
        {
            swap(t1 ,t2);
        }
        int devil;
        cin >> devil;

        if(devil < t1)
        {
            cout << t1 - 1 << endl;
            return;
        }
        else if(devil > t2)
        {
            cout << n - t2 << endl;
            return;
        }
        int mid = (t1 + t2) /2;
        cout << min (abs(mid - t1) ,abs(mid - t2)) << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}
