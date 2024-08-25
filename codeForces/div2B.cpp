#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;


        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }


        vector<pair<int, char>> sorted_freq;
        for (auto p : freq) {
            sorted_freq.push_back({p.second, p.first});
        }
        sort(sorted_freq.rbegin(), sorted_freq.rend());


        string result(n, ' ');
        int index = 0;
        for (auto p : sorted_freq) {
            int count = p.first;
            char c = p.second;
            for (int i = 0; i < count; i++) {
                if (index >= n) {
                    index = 1;
                }
                result[index] = c;
                index += 2;
            }
        }


        cout << result << endl;
    }
}

int main() {
    solve();
    return 0;
}
