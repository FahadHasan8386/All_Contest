#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 1; i < n ; i++)
        {
            if (v[i] - v[i - 1]  == -1)
            {
                swap (v[i],v[i-1]);
            }
        }
        cout << (is_sorted(v.begin(),v.end()) ? "YES\n" : "NO\n");
    }

    return 0;
}
