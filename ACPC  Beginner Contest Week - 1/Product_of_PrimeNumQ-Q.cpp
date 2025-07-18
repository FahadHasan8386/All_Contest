/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define endl '\n'

void primeFactorization(ll n) {
    bool first = true;

    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            if (!first) cout << "*";
            cout << i;
            n /= i;
            first = false;
        }
    }

    if (n > 1) {
        if (!first) cout << "*";
        cout << n;
    }

    cout << endl;
}

int main() {
    fastio();
    ll n;
    cin >> n;
    primeFactorization(n);
}
