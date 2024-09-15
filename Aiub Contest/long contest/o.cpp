#include <bits/stdc++.h>
using namespace std;

// Function to calculate GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to count the divisors of a number
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;  // i is a divisor
            if (i != n / i) {
                count++;  // n / i is also a divisor, if it's different
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);  // Speeds up I/O operations
    cin.tie(NULL);  // Unties cin from cout

    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int A, B;
        cin >> A >> B;  // Read each pair of numbers

        int gcdValue = gcd(A, B);  // Calculate GCD of A and B
        int result = countDivisors(gcdValue);  // Count divisors of the GCD
        cout << result << '\n';  // Output the result for each pair
    }

    return 0;
}
