#include <iostream>
#include <vector>
using namespace std;

// Function to find the longest sequence that meets the conditions
vector<long long> findLongestSequence(long long n) {
    vector<long long> sequence;
    long long current = 1;
    sequence.push_back(current);

    while (true) {
        long long next = current + 1;
        while (next <= n && (current | next) != n) {
            next++;
        }
        if (next > n) {
            break;
        }
        sequence.push_back(next);
        current = next;
    }

    return sequence;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> sequence = findLongestSequence(n);
        cout << sequence.size() << endl;
        for (long long num : sequence) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
