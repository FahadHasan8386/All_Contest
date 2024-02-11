#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string processString(string s) {
    string result = "";
    string vowels = "AEIOUYaeiouy";
    for (char& c : s) {
        if (vowels.find(c) == string::npos) {
            result += '.';
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << processString(input) << endl;
    return 0;
}
