/// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        long long a;
        int b;
        cin >> a >> b;

        if (a % b == 0) {
            cout << "Case " << i << ": divisible" << endl;
        } else {
            cout << "Case " << i << ": not divisible" << endl;
        }
    }

    return 0;
}
