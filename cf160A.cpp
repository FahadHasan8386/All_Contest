#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end(), greater<int>());

    int totalSum = 0;
    for (int coin : coins) {
        totalSum += coin;
    }

    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        sum += coins[i];
        ++count;
        if (sum > (totalSum - sum)) {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
