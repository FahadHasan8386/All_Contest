///In the name of Allah

#include <bits/stdc++.h>
using namespace std;


vector<bool> sieve(int limit) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main() {
    int n;
    cin >> n;


    int limit = 1000000;
    vector<bool> is_prime = sieve(limit);


    unordered_set<long long> t_primes;
    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            long long t_prime = 1LL * i * i;
            t_primes.insert(t_prime);
        }
    }


    while (n--) {
        long long x;
        cin >> x;
        if (t_primes.count(x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
