// 24. Write a C++ program that takes two integers and checks if the first number is divisible by the second number


#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    if (num1 % num2 == 0) {
        cout << num1 << " is divisible by " << num2 << endl;
    } else {
        cout << num1 << " is not divisible by " << num2 << endl;
    }

    return 0;
}
