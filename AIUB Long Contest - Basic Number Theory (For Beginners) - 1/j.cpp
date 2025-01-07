#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6;
const int MOD = 1073741824;
int cnt[mx + 1];

void divisor(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; j += i) {
            cnt[j]++;
        }
    }
}

int main() {
    divisor(mx);
    int a, b, c;
    cin >> a >> b >> c;

    long long totalDivisors = 0;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                long long combination = i * j * k;
                totalDivisors += cnt[combination];
                totalDivisors %= MOD;
            }
        }
    }

    cout << totalDivisors << endl;
    return 0;
}
