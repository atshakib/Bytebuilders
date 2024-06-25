/*
    6. Write a C++ program that converts temperature from Celsius to Fahrenheit. The user should input the temperature in Celsius, and the program should output the temperature in Fahrenheit.
*/

#include<iostream>
using namespace std;

int main()
{
    double c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    double f = (c*(9.0/5.0)) + 32;
    cout << "The temperature in Fahrenheit is: "<< f;
    return 0;
}