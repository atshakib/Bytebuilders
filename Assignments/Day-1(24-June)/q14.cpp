/*
    14. Write a C++ program to calculate the simple interest given principal, rate of interest, and time period.
*/

#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;
    
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (percent per year): ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;
    
    double interest = (principal * rate * time) / 100;
    
    cout << "Simple Interest = " << interest << endl;
    
    return 0;
}
