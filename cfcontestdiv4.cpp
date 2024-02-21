#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int countA = 0, countB = 0;
        for (char c : s) {
            if (c == 'A')
            {
                countA++;
            }
            else
            {
                countB++;
            }
        }

        if (countA > countB)
        {
            cout << "A " << endl;
        }

        else if (countB > countA)
        {
            cout << "B " <<  endl;
        }

    }

    return 0;
}
