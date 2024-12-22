#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long total_sum = 0;
        for (long long val : a) {
            total_sum += val;
        }

        long long count = 0;


        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                long long remaining_sum = total_sum - a[i] - a[j];
                if (remaining_sum >= x && remaining_sum <= y) {
                    count++;
                }

                if (remaining_sum < x) {
                    break;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}
