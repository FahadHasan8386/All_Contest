#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int max_width = 0 ,max_height = 0;
        for(int i = 0 ; i < n;i++)
        {
            int w, h;
            cin >> w >> h;

            max_width = max(max_width,w);
            max_height = max(max_height,h);
        }
        int ans = 2 * (max_width + max_height);

        cout << ans << endl;
    }
}
