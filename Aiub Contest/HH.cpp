#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(2 * n);

        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }


        sort(a.begin(), a.end());

        long long score = 0;

        for (int i = 0; i < n; i++) {
            score += abs(a[2 * n - 1 - i] - a[i]);
        }

        cout << 1LL*score << endl;
    }
    return 0;
}
