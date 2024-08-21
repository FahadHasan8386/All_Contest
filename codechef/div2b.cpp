#include <iostream>
#include <cmath> // For ceil function
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int A, B;
        cin >> A >> B;

        int totalEaten = 0;

        while (A != B) {
            if (A > B) {
                int eaten = ceil(A / 2.0);
                A -= eaten;
                totalEaten += eaten;
            } else {
                int eaten = ceil(B / 2.0);
                B -= eaten;
                totalEaten += eaten;
            }
        }

        cout << totalEaten << endl;
    }

    return 0;
}
