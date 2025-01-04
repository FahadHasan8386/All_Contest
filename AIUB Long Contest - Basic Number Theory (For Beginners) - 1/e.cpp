/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6;
vector<bool> is_prime(mx + 1, false);
vector<int> prime;

void sieve(int n)
{
    is_prime[2] = true;
    for (int i = 3; i <= n; i += 2) is_prime[i] = true;

    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    prime.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        if (is_prime[i])
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    sieve(mx);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;


        cout << prime[n - 1] << endl;

    }

    return 0;
}
