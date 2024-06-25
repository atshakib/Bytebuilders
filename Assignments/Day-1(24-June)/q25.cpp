// 25. Write a C++ program that takes the user's weight and height and calculates the Body Mass Index (BMI).
// BMI = weight / (weight x height)

#include <iostream>
using namespace std;

int main() {
    float weight, height;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    float bmi = weight / (height * height);

    cout << "Your Body Mass Index (BMI) is: " << bmi << endl;

    return 0;
}
