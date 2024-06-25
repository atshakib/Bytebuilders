/*
    13. Write a C++ program that takes an integer input from the user and outputs whether the number is positive, negative, or zero.
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << number << " is positive." << endl;
    } else if (number < 0) {
        cout << number << " is negative." << endl;
    } else {
        cout << number << " is zero." << endl;
    }

    return 0;
}
