///IN the name of Allah

#include <bits/stdc++.h>
using namespace std;

bool isBalancePair(char c1, char c2) {
    return (c1 == '(' && c2 == ')') || (c1 == '[' && c2 == ']');
}

bool isBalancedString(const string& s) {
    stack<char> st;
    for (auto u : s) {
        if (u == '(' || u == '[') {
            st.push(u);
        } else {
            if (st.empty() || !isBalancePair(st.top(), u)) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        cin >> s;

        if (s.length() > 128) {
            cout << "NO" << endl;
        } else {
            cout << (isBalancedString(s) ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
