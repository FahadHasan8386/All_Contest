#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6 + 10;
bool isPrime[mx + 1];
int cntDiv[mx];
int pre[11][mx];

void primeGen()
{
    fill(isPrime, isPrime + mx + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime
    for (int i = 2; i * i <= mx; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= mx; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

void divisorCount()
{

    for (int i = 2; i <= mx; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i; j <= mx; j += i)
            {
                cntDiv[j]++;
            }
        }
    }


    for (int n = 0; n <= 10; ++n)
    {
        for (int i = 1; i <= mx; ++i)
        {
            pre[n][i] = pre[n][i - 1] + (cntDiv[i] == n);
        }
    }
}

void sadman()
{
    int a, b, n;
    cin >> a >> b >> n;
    cout << pre[n][b] - pre[n][a - 1] << endl;
}

int main()
{
    primeGen();
    divisorCount();

    int t;
    cin >> t;
    while (t--)
    {
        sadman();
    }

    return 0;
}
