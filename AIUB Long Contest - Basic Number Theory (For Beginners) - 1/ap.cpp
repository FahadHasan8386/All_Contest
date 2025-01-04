///IN the name of Allah
#include <bits/stdc++.h>
using namespace std ;
set<long long >s;

void countDivisors(long long n)
{
    for(long long i = 1 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            long long x = i;
            long long y = n/i;
            s.insert(x);
            s.insert(y);
        }

    }
}


int main()
{

    long long n,k;
    cin >> n >> k;
    countDivisors(n);

    vector<long long>v;
    v.assign(s.begin(),s.end());

    if(k > v.size())cout << -1 << endl;
    else cout << v[k-1] << endl;
}
