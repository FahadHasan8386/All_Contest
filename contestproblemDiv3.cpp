#include <iostream>
#include <string>
using namespace std;

// Function to calculate the position of a character in the alphabet
int position(char c) {
    return c - 'a' + 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int encoded;
        cin >> encoded;

        string smallest_word = "zzz"; // Initialize with a word larger than any possible word

        // Iterate over all possible combinations of 3 letters
        for (char a = 'a'; a <= 'z'; ++a) {
            for (char b = 'a'; b <= 'z'; ++b) {
                for (char c = 'a'; c <= 'z'; ++c) {
                    // Calculate the sum of positions of the current word
                    int sum = position(a) + position(b) + position(c);
                    // Check if the sum matches the encoded integer and the word is lexicographically smaller
                    if (sum == encoded && smallest_word > string(1, a) + string(1, b) + string(1, c)) {
                        smallest_word = string(1, a) + string(1, b) + string(1, c);
                    }
                }
            }
        }

        // Output the lexicographically smallest word that could have been encoded
        cout << smallest_word << endl;
    }

    return 0;
}
