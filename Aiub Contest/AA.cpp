///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n;
    cin >> n;

    string str = to_string(n);
    int cnt = 0;
    for(int i = 0 ; i < 3 ;i++)
    {
        if(str[i] == '7')
        {
            cnt++;
        }
    }
    if(cnt > 0)
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
