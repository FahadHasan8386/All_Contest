///IN the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int l , r;
        cin >> l >> r;

        if (2*l > r)
        {
            cout << "-1 -1"<< endl;
        }
        else{
            cout << l <<" "<< 2*l << endl;
        }
    }
}
