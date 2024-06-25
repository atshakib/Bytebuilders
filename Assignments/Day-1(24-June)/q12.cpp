/*
    12. Write a C++ program that takes a year as input from the user and checks if it is a leap year.
    Hint: A year is a leap year if it is divisible by 4, but not divisible by 100, unless it is also divisible by 400.
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
