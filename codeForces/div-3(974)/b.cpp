#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;


        long long start = n - k + 1;
        long long end = n;


        long long totalCount = end - start + 1;


        long long oddCount = (totalCount + (start % 2)) / 2;


        if (oddCount % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
