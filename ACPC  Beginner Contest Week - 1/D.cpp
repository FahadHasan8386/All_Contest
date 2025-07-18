/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int gcd (int a , int b)
{
    while(b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    int first;
    cin >> first;

    for(int i = 1 ; i < n ;i++)
    {
        int x;
        cin >> x;
        first = gcd(first,x);
    }
    cout << first << endl;

}
