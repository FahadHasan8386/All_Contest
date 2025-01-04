///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6;
vector<bool> is_prime(mx + 1, false);
vector<int> prime;

void primefact() {
    is_prime[2] = 1;
    for (int i = 3; i <= mx; i += 2) is_prime[i] = 1;

    int sq = sqrt(mx);
    for (int i = 3; i <= sq; i += 2) {
        if (is_prime[i]) {
            for (int j = i * i; j <= mx; j += i) {
                is_prime[j] = 0;
            }
        }
    }

    prime.push_back(2);
    for (int i = 3; i <= mx; i++) {
        if (is_prime[i]) {
            prime.push_back(i);
        }
    }
}

void sum(int n) {
    long long sum = 0;
    for (int i = 0; i < prime.size(); i++) {
        if (prime[i] > n) break;
        sum += prime[i];
    }
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;

    primefact();

    while (t--) {
        int n;
        cin >> n;
        sum(n);
    }
    return 0;
}
