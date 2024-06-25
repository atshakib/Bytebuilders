// 23. Write a C++ program that takes the time in hours and minutes and converts it into total minutes.

#include <iostream>
using namespace std;

int main() {
    int hours, minutes;

    cout << "Enter the time in hours: ";
    cin >> hours;
    cout << "Enter the time in minutes: ";
    cin >> minutes;

    int totalMinutes = hours * 60 + minutes;

    cout << "Total minutes: " << totalMinutes << endl;

    return 0;
}
