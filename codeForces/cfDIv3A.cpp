#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number could be a miswritten 10^x
bool isMiswrittenForm(int a) {
    // Check all powers of 10 from 10^2 to 10^4
    for (int x = 2; x <= 4; ++x) {
        int powerOfTen = pow(10, x);
        if (a == powerOfTen) return false; // Exact match, not miswritten
        int len = log10(powerOfTen) + 1; // Length of the powerOfTen number
        for (int i = 1; i <= len; ++i) {
            // Check if the number could be miswritten as "powerOfTen + something"
            int miswrittenNumber = powerOfTen + a % int(pow(10, i));
            if (a == miswrittenNumber) return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;

        if (isMiswrittenForm(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
