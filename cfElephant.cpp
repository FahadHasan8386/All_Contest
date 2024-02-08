#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x;
    cin >> x;


    int min_steps = ceil((double)x / 5);

    cout << min_steps << endl;

    return 0;
}
