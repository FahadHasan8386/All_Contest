#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        long long total_a = 0, total_b = 0, surplus = 0, deficit = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_a += a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
            total_b += b[i];
        }

        if (total_a < total_b) {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                surplus += a[i] - b[i];
            } else {
                deficit += b[i] - a[i];
            }
        }

        if (surplus >= deficit) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
