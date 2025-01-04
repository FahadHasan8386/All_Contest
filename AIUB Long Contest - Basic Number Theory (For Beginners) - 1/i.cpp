///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

void primefact(long long n)
{
    long long large = 0;
    int sq = sqrt(n);
    for(int i = 2 ; i <= sq; i++)
    {
        while(n % i == 0)
        {
            large = i;
            n = n/i;
        }
    }
    if(n > 1)
    {
        large = n;
    }
    cout << large << endl;
}
int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        primefact( n);

    }
    return 0;
}

