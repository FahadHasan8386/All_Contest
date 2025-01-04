///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

const int mx = 1000;
vector<bool> is_prime(mx + 1, false);
vector<int> prime;

void prime_fact(int n) {
    is_prime[2] = true;
    for (int i = 3; i <= n; i += 2) is_prime[i] = true;
    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (is_prime[i]) {
            prime.push_back(i);
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    prime_fact(n);

    int count = 0;
    for (int i = 0; i < prime.size() - 1; i++) {
        int next_prime_sum = prime[i] + prime[i + 1] + 1;
        if (next_prime_sum <= n && is_prime[next_prime_sum]) {
            count++;
        }
    }

    if (count >= k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
