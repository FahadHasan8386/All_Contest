///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        int robin_gold = 0;
        int count_give_gold = 0;


        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if (arr[i] >= k) {

                robin_gold += arr[i];
            } else if (arr[i] == 0 && robin_gold > 0) {
                count_give_gold++;
                robin_gold--;
            }
        }

        cout << count_give_gold << endl;
    }

    return 0;
}
