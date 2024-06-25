/*
    10. Write a C++ program to input three sides of a triangle and check whether the triangle is valid or not.
*/

#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;
    cout << "Enter the first side of the triangle: ";
    cin >> side1;
    cout << "Enter the second side of the triangle: ";
    cin >> side2;
    cout << "Enter the third side of the triangle: ";
    cin >> side3;

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }

    return 0;
}
