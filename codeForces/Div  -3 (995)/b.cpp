#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
       long long n, a, b, c;
        cin >> n >> a >> b >> c;


        long long cycle_sum = a + b + c;


        long long full_cycles = n / cycle_sum;


        long long remaining = n % cycle_sum;


        long long days = full_cycles * 3;
        if (remaining > 0) {
            if (remaining <= a) {
                days += 1;
            } else if (remaining <= a + b) {
                days += 2;
            } else {
                days += 3;
            }
        }

        cout << days << endl;
    }

    return 0;
}
