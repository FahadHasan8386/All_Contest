#include <bits/stdc++.h>

using namespace std;

void fahad()
{
    long long n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }

        bitset<300000 + 1> known_questions;
        for (int i = 0; i < k; ++i) {
            int q;
            cin >> q;
            known_questions.set(q);
        }


        int known_count = known_questions.count();

        string result;
        result.reserve(m);

        for (int i = 0; i < m; ++i) {
            bool pass = false;

            if (known_count == n) {
                pass = true;
            } else if (known_count == n - 1 && !known_questions.test(a[i])) {
                pass = true;
            }
            result += (pass ? '1' : '0');
        }

        cout << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        fahad();
    }

    return 0;
}
