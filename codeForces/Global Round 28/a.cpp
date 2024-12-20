#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int tt;
    cin >> tt;

    while (tt--)
    {
        int x;
        cin >> x;

        while (x > 0)
        {
            string s = to_string(x);
            size_t pos = s.find("33");

            if (pos != string::npos)
            {

                s.erase(pos, 2);


                if (s.empty())
                {
                    x = 0;
                }
                else
                {
                    x = stoi(s);
                }
            }
            else
            {

                x -= 33;


                if (x < 0)
                    break;
            }
        }

        if (x == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
