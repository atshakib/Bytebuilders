// 18. Write a C++ program that takes a float value as input and rounds it to the nearest integer.

#include <iostream>
#include <cmath>  // For the round function

using namespace std;

int main() {
    float value;
    cout << "Enter a float value: ";
    cin >> value;

    int roundedValue = round(value);
    cout << "Rounded value: " << roundedValue << endl;

    return 0;
}
