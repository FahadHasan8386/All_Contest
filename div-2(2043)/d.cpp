#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long l, r, G;
        cin >> l >> r >> G;

        long long A = (l + G - 1) / G * G; // Find smallest multiple of G within range
        long long B = r / G * G;          // Find largest multiple of G within range

        if (A > B) {
            cout << "-1 -1" << endl;
        } else {
            cout << A << " " << B << endl;
        }
    }

    return 0;
}
