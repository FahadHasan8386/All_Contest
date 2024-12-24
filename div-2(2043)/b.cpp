///In the name of Allah

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<int> getDigits(ll num1, ll num2)
{
    vector<int> digits;
    digits.push_back(1);
    if (num1 >= 3 || num2 % 3 == 0)
    {
        digits.push_back(3);
    }
    if (num2 == 5)
    {
        digits.push_back(5);
    }
    if (num1 >= 3 || (num1 == 2 && num2 == 7))
    {
        digits.push_back(7);
    }
    if (num1 >= 6)
    {
        digits.push_back(9);
    }
    else
    {
        ll factorial = 1;
        for (int i = 2; i <= num1; i++) {
            factorial *= i;
        }
        if ((factorial * num2) % 9 == 0)
        {
            digits.push_back(9);
        }
    }
    return digits;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll num1, num2;
        cin >> num1 >> num2;

        vector<int> digits = getDigits(num1, num2);

        for (int digit : digits)
        {
            cout << digit << " ";
        }
        cout << endl;
    }
    return 0;
}
