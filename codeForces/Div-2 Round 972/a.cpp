#include <bits/stdc++.h>
using namespace std;

void generateString(int n) {

    string pattern1 = "uo";
    string pattern2 = "iae";
    string pattern3 = "oeiiua";


    if (n == 2) {
        cout << pattern1 << endl;
    }
    else if (n == 3) {
        cout << pattern2 << endl;
    }
    else {

        for (int i = 0; i < n; ++i) {
            cout << pattern3[i % 6];
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        generateString(n);
    }
    return 0;
}
