// 20. Write a C++ program that takes an integer as input and checks if it is a multiple of 5 or 7.

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 5 == 0 && number % 7 == 0) {
        cout << "The number is a multiple of both 5 and 7." << endl;
    } else if (number % 5 == 0) {
        cout << "The number is a multiple of 5." << endl;
    } else if (number % 7 == 0) {
        cout << "The number is a multiple of 7." << endl;
    } else {
        cout << "The number is not a multiple of 5 or 7." << endl;
    }

    return 0;
}
