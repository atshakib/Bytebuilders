// 17. Write a C++ program that takes two characters as input and checks if they are the same or different.

#include <iostream>
using namespace std;

int main() {
    char char1, char2;

    cout << "Enter the first character: ";
    cin >> char1;
    cout << "Enter the second character: ";
    cin >> char2;

    if (char1 == char2) {
        cout << "The characters are the same." << endl;
    } else {
        cout << "The characters are different." << endl;
    }

    return 0;
}
