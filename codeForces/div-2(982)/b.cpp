#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans = n;

        for(int i = 0; i < n; i++)
        {
            int cnt = 0;
            for(int j = i + 1; j < n; j++)
            {
                if(v[j] > v[i])
                {
                    cnt++;
                }
            }
            ans = min(ans, cnt+i);
        }

        cout << ans << endl;
    }
    return 0;
}
