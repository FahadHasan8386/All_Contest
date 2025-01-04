///In the name of Allah

#include <bits/stdc++.h>
using namespace std;


int countAlmostPrimes(int n) {
    vector<int> prime_factors(n + 1, 0);


    for (int i = 2; i <= n; i++) {
        if (prime_factors[i] == 0) {
            for (int j = i; j <= n; j += i) {
                prime_factors[j]++;
            }
        }
    }


    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (prime_factors[i] == 2) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countAlmostPrimes(n) << endl;
    return 0;
}
