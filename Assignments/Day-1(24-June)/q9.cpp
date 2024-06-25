/*
    9. Write a C++ program that takes the radius of a circle as input and outputs the area and circumference of the circle.
*/

#include <iostream>
using namespace std;

int main() {
    double radius;
    double PI = 3.14;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = PI * radius * radius; 
    double circumference = 2 * PI * radius; 

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}
