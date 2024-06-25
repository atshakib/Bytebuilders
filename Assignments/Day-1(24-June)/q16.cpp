//16. Write a C++ program that takes the lengths of the sides of a rectangle and calculates the area and perimeter of the rectangle.

#include <iostream>
using namespace std;

int main() {
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}
