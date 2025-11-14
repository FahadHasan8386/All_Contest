///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

void fahad ()
{
    string s;
    cin >> s;

    vector<char> arr;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '\\' && i + 1 < s.size() && s[i + 1] == '0') {
            arr.push_back('\0');
            i++;
        } else {
            arr.push_back(s[i]);
        }
    }

    arr.push_back('\0');

    char* ch = arr.data();

    cout << arr.size() << " " << strlen(ch) << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        fahad();
    }
}
