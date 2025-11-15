/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'


void fahad() {
        int n, m;
        cin >> n >> m;

        ll a[n][m];
        vector<ll> r(n, 0), c(m, 0);

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                cin >> a[i][j];

                r[i] ^= a[i][j];
                c[j] ^= a[i][j];
            }
        }

        ll s = 0;

        for (int i = 0; i < n; i++) s += r[i];
        for (int j = 0; j < m; j++) s += c[j];

        ll d = 0;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                ll v = (r[i] ^ c[j]) - r[i] - c[j];
                d = min(d, v);
            }
        }

        cout << s + d << endl;
}


int main() {
    fastio();

    int t;
    cin >> t;

    while (t--) {
        fahad();
    }
}
