#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (1 <= A && A <= 10 && 1 <= B && B <= 10 && 1 <= C && C <= 10) {
        int Chef = A * C;
        int Chefina = B * C;

        cout << "the maximum amongst these is :" << max(Chef , Chefina) << endl;
    } else {
        cout << "Input values in not valid" << endl;
    }

    return 0;
}

