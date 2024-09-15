#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int n;
        cin >> n;

        if (n == 0) {
            break;
        }

        vector<int> ages(n);


        for (int i = 0; i < n; i++) {
            cin >> ages[i];
        }


        sort(ages.begin(), ages.end());


        for (int i = 0; i < n; i++) {
            cout << ages[i];
        }
        cout << '\n';
    }

    return 0;
}
