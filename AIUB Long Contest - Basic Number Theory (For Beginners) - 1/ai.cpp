///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int find_lcm(int n)
{
    int result = 1;
    for(int i = 2 ; i <= n ;i++)
    {
        result = (result * i)/__gcd(result , i);
    }
    return result;
}

int main ()
{
    int tt;
    cin >> tt;

    while(tt--)
    {
        int n;
        cin >> n;

        cout << find_lcm(n) << endl;
    }
}
