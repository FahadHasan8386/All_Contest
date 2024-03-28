#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string convertTo12HourFormat(string time) {
    int hour = stoi(time.substr(0, 2));
    int minute = stoi(time.substr(3, 2));
    string period;

    if (hour < 12) {
        period = "AM";
        if (hour == 0) {
            hour = 12;
        }
    } else {
        period = "PM";
        if (hour > 12) {
            hour -= 12;
        }
    }

    stringstream ss;
    ss << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << period;
    return ss.str();
}

int main() {

    int t;
    cin >> t;
    cin.ignore();


    for (int i = 0; i < t; ++i) {

        string time24Hour;
        getline(cin, time24Hour);
        cout << convertTo12HourFormat(time24Hour) << endl;
    }

    return 0;
}
