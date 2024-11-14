#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int X, Y, K;
        cin >> X >> Y >> K;


        int Ax = 0, Ay = 0, Bx = K, By = 0;


        int Cx = 0, Cy = 0, Dx = 0, Dy = K;


        cout << Ax << " " << Ay << " " << Bx << " " << By << endl;
        cout << Cx << " " << Cy << " " << Dx << " " << Dy << endl;
    }

    return 0;
}
