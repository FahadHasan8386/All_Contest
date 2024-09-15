#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int K;
        cin >> K;

        unordered_map<char, int> charValueMap;

        for (int i = 0; i < K; i++) {
            char ch;
            int value;
            cin >> ch >> value;
            charValueMap[ch] = value;
        }

        int M;
        cin >> M;
        cin.ignore();

        long long totalCents = 0;

        for (int i = 0; i < M; i++) {
            string line;
            getline(cin, line);

            for (char ch : line) {
                if (charValueMap.count(ch)) {
                    totalCents += charValueMap[ch];
                }
            }
        }

        double totalDollars = totalCents / 100.0;
        cout << fixed << setprecision(2) << totalDollars << "$" << endl;
    }

    return 0;
}
