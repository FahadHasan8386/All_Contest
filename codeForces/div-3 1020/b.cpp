#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> p;
    for (int i = 0; i < x; ++i)
        p.push_back(i);
    for (int i = x + 1; i < n; ++i)
        p.push_back(i);
    if (x < n)
        p.push_back(x);
    for (int i = 0; i < p.size(); ++i)
        cout << p[i] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
