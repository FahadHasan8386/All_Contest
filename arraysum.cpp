#include<iostream>
using namespace std;

int main() {
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {6, 7, 8, 9, 10};

    // Create a third array to store the sum
    int sumArray[5];  // Corrected the size to match array1 and array2

    // Perform addition and store the result in sumArray
    for (int i = 0; i < 5; ++i) {
        sumArray[i] = array1[i] + array2[i];
    }

    int temp;
    int n = 5;  // Corrected the size to match array1 and array2

    for (int i = 0; i < n/2; i++) {
        temp = sumArray[i];
        sumArray[i] = sumArray[n-1-i];
        sumArray[n-1-i] = temp;
    }

    cout << "Resultant Array after addition and reversal:\n";
    for (int i = 0; i < n; i++) {
        cout << sumArray[i] << " ";
    }

    return 0;
}

