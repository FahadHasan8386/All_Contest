#include <iostream>
#include <vector>
#include <set>

using namespace std;

string canFormPermutation(const string& s, int n) {
    set<int> available;
    for (int i = 1; i <= n; ++i) {
        available.insert(i);
    }

    vector<int> perm(n, -1);
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'p') {

            if (available.size() < i + 1) {
                return "No";
            }
            for (int j = 1; j <= i + 1; ++j) {
                available.erase(j);
                perm[j - 1] = j;
        }
        else if (s[i] == 's') {

            if (available.size() < n - i) {
                return "No";
            }
            for (int j = n - i; j <= n; ++j) {
                available.erase(j);
                perm[j - 1] = j;
            }
        }
    }


    int idx = 0;
    for (int i = 0; i < n; ++i) {
        if (perm[i] == -1) {
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
