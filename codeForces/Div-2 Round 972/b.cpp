///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> teacherCell(m);
        vector<int> studentCell(q);
        vector<int>result;

        for(int i = 0; i < m; i++) {
            cin >> teacherCell[i];
        }


        for(int i = 0; i < q; i++) {
            cin >> studentCell[i];
        }
        int minDifference = INT_MAX;


        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                int difference = abs(teacherCell[i] - studentCell[j]);
                minDifference = min(minDifference, difference);
            }
        }


        cout << minDifference << endl;
    }

    return 0;
}
