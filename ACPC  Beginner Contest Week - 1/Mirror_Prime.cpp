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

bool isPrime(int n)
{
    if(n == 0 || n == 1) return false;
    for(int i = 2 ; i * i <= n ; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void fahad()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;

    for(int i = a ; i <= b ; i++)
    {
        if(isPrime(i))
        {
            string s = to_string(i);
            reverse(s.begin(),s.end());
            int rev = stoi(s);

            if(isPrime(rev))
            {
                cnt++;
            }
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
