#include<iostream>
using namespace std;

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int b[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int c1 = 5 + 8;
    int* c = new int[c1];  // Dynamic memory allocation

    for (int i = 0; i < 5; i++) {
        c[i] = a[i];
    }
    for (int i = 0; i < 8; i++) {
        c[5 + i] = b[i];
    }
    for (int i = c1 - 1; i >= 0; i--) {
        cout << c[i] << "  ";
    }

    delete[] c;  // Don't forget to free the allocated memory
    return 0;
}
