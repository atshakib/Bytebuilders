// 22. Write a C++ program that takes an integer input representing a month (1-12) and outputs the number of days in that month, considering February has 28 days.

#include <iostream>
using namespace std;

int main() {
    int month;
    int daysInMonth = 0;

    cout << "Enter the month (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month entered. Please enter a number between 1 and 12." << endl;
    } else {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
            month == 10 || month == 12) {
            daysInMonth = 31;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            daysInMonth = 30;
        } else if (month == 2) {
            daysInMonth = 28;
        }

        cout << "Number of days in month " << month << ": " << daysInMonth << endl;
    }

    return 0;
}
