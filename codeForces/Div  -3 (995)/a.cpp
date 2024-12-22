#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> q(n), w(n);
        for (int i = 0; i < n; i++) cin >> q[i];
        for (int i = 0; i < n; i++) cin >>w[i];

        vector<int> dp(n + 1, 0);

        for (int i = 1; i <= n; i++) {

            dp[i] = dp[i - 1];
            dp[i] = max(dp[i], dp[i - 1] + q[i - 1] - (i < n ? w[i] : 0));
        }


        cout << dp[n] << endl;
    }

    return 0;
}
