#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int k ,n ,w ;
    int sum = 0;

        cin >> k >> n >> w;

    for (int i = 0 ; i <= w ;i++)
    {
        sum += i;
    }
        //cout << sum << endl;

    int F = sum * k - n;

        if (F < 0)
        {
            cout << "0";

        }
        else
        {
            cout << F;
        }
}
