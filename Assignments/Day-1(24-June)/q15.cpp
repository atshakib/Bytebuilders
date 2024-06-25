// 15. Write a C++ program that takes the lengths of three sides of a triangle and checks if the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;

    cout << "Enter the length of side 1: ";
    cin >> side1;
    cout << "Enter the length of side 2: ";
    cin >> side2;
    cout << "Enter the length of side 3: ";
    cin >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is equilateral." << endl;
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "The triangle is isosceles." << endl;
    } else {
        cout << "The triangle is scalene." << endl;
    }

    return 0;
}
