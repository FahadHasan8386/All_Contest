#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a , b;
    cin >> a >> b;

    while(b != 0)
    {
        long long rem = a % b;
        a = b;
        b = rem;
    }

    cout << a << endl;
}
