#include <iostream>
#include <vector>

using namespace std;

int minOperations(vector<int>& cells) {
    int n = cells.size();
    int operations = 0;
    bool chipFound = false;
    int firstChipIndex = -1;


    for (int i = 0; i < n; ++i) {
        if (cells[i] == 1) {
            firstChipIndex = i;
            chipFound = true;
            break;
        }
    }

    if (!chipFound)
        return 0;

    for (int i = firstChipIndex + 1; i < n; ++i) {
        if (cells[i] == 1) {
            operations += i - firstChipIndex - 1;
            firstChipIndex = i;
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> cells(n);
        for (int i = 0; i < n; ++i) {
            cin >> cells[i];
        }

        cout << minOperations(cells) << endl;
    }

    return 0;
}
