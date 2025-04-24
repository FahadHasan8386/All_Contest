/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

void fahad(string s)
{
    int cnt1 = 0;
    for(char ch : s)
    {
        if(ch == '1') cnt1++;
    }

    int n = s.length();
    int total = n + cnt1 * (n - 2);
    cout << total << endl;
}

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        fahad(s);
    }
    return 0;
}

