#include <bits/stdc++.h>
using namespace std;

pair<long long, int> calculateLuckySum(long long start, long long end, int minSegments) {

    if (end - start + 1 < minSegments) {
        return {0, 0};
    }

    if (end - start + 1 == 1) {
        return {start, 1};
    }

    long long midPoint = start + (end - start) / 2;

    if ((end - start + 1) % 2) {

        pair<long long, int> leftSubtreeResult = calculateLuckySum(start, midPoint - 1, minSegments);

        long long totalLuckySum = midPoint + 2 * leftSubtreeResult.first + midPoint * leftSubtreeResult.second;
        int totalSegments = 2 * leftSubtreeResult.second + 1;

        return {totalLuckySum, totalSegments};
    } else {

        pair<long long, int> leftSubtreeResult = calculateLuckySum(start, midPoint, minSegments);

        long long totalLuckySum = 2 * leftSubtreeResult.first + midPoint * leftSubtreeResult.second;
        int totalSegments = 2 * leftSubtreeResult.second;

        return {totalLuckySum, totalSegments};
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCaseCount;
    cin >> testCaseCount;

    while (testCaseCount--) {
        long long maxNumber, minThreshold;
        cin >> maxNumber >> minThreshold;

        pair<long long, int> luckySumResult = calculateLuckySum(1, maxNumber, minThreshold);

        cout << luckySumResult.first << "\n";
    }

    return 0;
}
