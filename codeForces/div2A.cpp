///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(s[0] == s[n-1])
        {
            cout <<"no" <<endl;
         }
         else{
            cout << "yes" <<endl;
         }
    }
}
