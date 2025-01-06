#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void fahad() {
    int n, k;
    cin >> n >> k;

    vector<ll> factor;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factor.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factor.push_back(n);
    }

    if (factor.size() < k) {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < k - 1; i++) {
        cout << factor[i] << " ";
    }

    ll lastFactor = 1;
    for (int i = k - 1; i < factor.size(); i++) {
        lastFactor *= factor[i];
    }
    cout << lastFactor << endl;
}

int main() {
    fahad();
    return 0;
}
