/*
    1. Write a C++ program to input two integers and output their sum, difference, product, and quotient.
*/

#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    cout << "Sum : " << sum << "\nDifference : " << difference << "\nProduct : " << product << "\nQuotient : " << quotient;
    return 0;
}