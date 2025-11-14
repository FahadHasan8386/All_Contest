/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int caseNo = 1;

void fahad()
{
    int n;
    cin >> n;

    vector<long long> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    vector<long long> pref(n), suff(n);

    pref[0] = v[0];
    for(int i = 1; i < n; i++)
        pref[i] = max(pref[i-1], v[i]);

    suff[n-1] = v[n-1];
    for(int i = n-2; i >= 0; i--)
        suff[i] = min(suff[i+1], v[i]);

    int ans = -1;

    for(int i = 0; i < n; i++)
    {
        bool ok1 = (i == 0) || (v[i] > pref[i-1]);
        bool ok2 = (i == n-1) || (v[i] < suff[i+1]);

        if(ok1 && ok2)
        {
            ans = i + 1;
            break;
        }
    }

    if(ans == -1)
        cout << "Case " << caseNo++ << ": Humanity is doomed!" << endl;
    else
        cout << "Case " << caseNo++ << ": " << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
        fahad();
}
