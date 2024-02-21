#include <iostream>
#include <vector>
using namespace std;


int sumOfDigits(int n)
    {
    int sum = 0;

    while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
    return sum;
}

int main() {

    vector<int> digitSums(200001, 0);

    for (int i = 1; i <= 200000; ++i)
     {

        digitSums[i] = digitSums[i - 1] + sumOfDigits(i);
     }

    int t;
        cin >> t;

    while (t--)
        {
        int n;
            cin >> n;
            cout << digitSums[n] << endl;
        }

    return 0;
}
