/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;

    int white = 0;
    for(int i = 0 ; i < k;i++)
    {
        if(s[i] == 'W')
        {
            white++;
        }
    }
    int min_white = white;

    for(int i = k ; i < n ;i++)
    {
        if(s[i-k] == 'W')white--;
        if(s[i] == 'W')white++;
        min_white = min(min_white , white);
    }
    cout << min_white << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        fahad();
    }
}
