/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'


ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

void fahad()
{
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1 ; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            if (i * i == n)
                cnt++;
            else
                cnt += 2;
        }
    }
    cout << cnt << endl;
}

int main()
{
    fastio();
    int t = 1;
    //cin >> t;
    while (t--) fahad();
}
