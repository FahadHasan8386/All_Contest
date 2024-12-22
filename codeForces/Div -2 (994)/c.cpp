#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<vector<int>> adj(n + 1);


        for (int i = 1; i <= n; i++) {
            adj[i].push_back((i - 1 == 0) ? n : i - 1);
            adj[i].push_back((i + 1 > n) ? 1 : i + 1);
        }


        adj[x].push_back(y);
        adj[y].push_back(x);


        vector<int> result(n + 1, -1);


        for (int i = 1; i <= n; i++) {
            set<int> neighbor_values;
            for (int neighbor : adj[i]) {
                if (result[neighbor] != -1) {
                    neighbor_values.insert(result[neighbor]);
                }
            }

            int mex = 0;
            while (neighbor_values.count(mex)) {
                mex++;
            }
            result[i] = mex;
        }

        for (int i = 1; i <= n; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
