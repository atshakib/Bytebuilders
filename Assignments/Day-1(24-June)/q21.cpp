// 21. Write a C++ program that takes the coordinates of a point (x, y) and checks if it lies on the x-axis, y-axis, or neither.

#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter the x-coordinate of the point: ";
    cin >> x;
    cout << "Enter the y-coordinate of the point: ";
    cin >> y;

    if (x == 0 && y == 0) {
        cout << "The point lies at the origin." << endl;
    } else if (x == 0) {
        cout << "The point lies on the y-axis." << endl;
    } else if (y == 0) {
        cout << "The point lies on the x-axis." << endl;
    } else {
        cout << "The point lies neither on the x-axis nor on the y-axis." << endl;
    }

    return 0;
}
