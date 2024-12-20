#include <iostream>
#include <vector>
#include <set>

using namespace std;

string canFormPermutation(const string& s, int n) {
    set<int> available;
    for (int i = 1; i <= n; ++i) {
        available.insert(i);
    }

    vector<int> perm(n, -1);  // To store the permutation, initialized with -1

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'p') {
            // Ensure the first i+1 positions can be filled with the first i+1 numbers
            if (available.size() < i + 1) {
                return "No";
            }
            for (int j = 1; j <= i + 1; ++j) {
                available.erase(j);
                perm[j - 1] = j;  // Assign numbers from 1 to i+1
            }
        }
        else if (s[i] == 's') {
            // Ensure the last n-i numbers can be filled with the numbers from i+1 to n
            if (available.size() < n - i) {
                return "No";
            }
            for (int j = n - i; j <= n; ++j) {
                available.erase(j);
                perm[j - 1] = j;  // Assign numbers from n-i to n
            }
        }
    }

    // Now assign the remaining available numbers for '.' positions
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        if (perm[i] == -1) {  // For unassigned positions
            while (available.find(idx + 1) == available.end()) {
                idx++;
            }
            perm[i] = idx + 1;
            available.erase(idx + 1);
        }
    }

    return "Yes";
}

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    cout << canFormPermutation(s, n) << endl;

    return 0;
}
