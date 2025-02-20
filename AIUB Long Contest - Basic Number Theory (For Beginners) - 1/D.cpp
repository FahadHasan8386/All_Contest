#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        long long number;
        long long largestFactor = 0;
        long long maxFrequency = 1;
        cin >> number;
        long long originalNumber = number;
        long long limit = sqrt(number);

        for (long long factor = 2; factor <= limit; factor++) {
            long long frequency = 0;
            while (number % factor == 0) {
                number /= factor;
                frequency++;
                if (frequency > maxFrequency) {
                    largestFactor = factor;
                    maxFrequency = frequency;
                }
            }
        }

        cout << maxFrequency << endl;
        for (int i = 1; i < maxFrequency; i++) {
            cout << largestFactor << " ";
            originalNumber /= largestFactor;
        }
        cout << originalNumber << endl;
    }
    return 0;
}
