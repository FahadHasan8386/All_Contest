///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

void fahad()
{
    long long n;
    cin >> n;

    long long  cnt = 0;
    while (n > 3)
    {
        n /= 4;
        cnt++;
    }

    cout << (1LL << cnt) << endl;
}

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        fahad();
    }
}
