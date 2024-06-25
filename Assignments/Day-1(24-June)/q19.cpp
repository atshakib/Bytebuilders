// 19. Write a C++ program that takes the coordinates of two points and calculates the distance between them.

#include <iostream>
#include <cmath> // Include cmath for sqrt function
using namespace std;

int main() {
    float x1, y1, x2, y2;

    cout << "Enter the x-coordinate of the first point: ";
    cin >> x1;
    cout << "Enter the y-coordinate of the first point: ";
    cin >> y1;
    cout << "Enter the x-coordinate of the second point: ";
    cin >> x2;
    cout << "Enter the y-coordinate of the second point: ";
    cin >> y2;

    float dx = x2 - x1;
    float dy = y2 - y1;

    float distance = sqrt(dx * dx + dy * dy);

    cout << "The distance between the points is: " << distance << endl;

    return 0;
}
