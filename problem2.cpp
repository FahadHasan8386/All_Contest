#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1 ; i <= T ; i++) {
        int P, L;
        cin >> P >> L;


        int literacyRate = (L * 100) / P;


        if (literacyRate >= 75) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
