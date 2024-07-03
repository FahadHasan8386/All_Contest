#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) {
        cerr << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    int result = 4 + 3 * (n - 1);

    cout << result << endl;
    return 0;
}
