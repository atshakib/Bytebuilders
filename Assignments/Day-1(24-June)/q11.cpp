/*
    11. Write a C++ program to input marks of five subjects and calculate the total, average, and percentage.
*/

#include <iostream>
using namespace std;

int main() {
    double marks1, marks2, marks3, marks4, marks5;

    cout << "Enter marks of the first subject: ";
    cin >> marks1;
    cout << "Enter marks of the second subject: ";
    cin >> marks2;
    cout << "Enter marks of the third subject: ";
    cin >> marks3;
    cout << "Enter marks of the fourth subject: ";
    cin >> marks4;
    cout << "Enter marks of the fifth subject: ";
    cin >> marks5;

    double total = marks1 + marks2 + marks3 + marks4 + marks5;
    double average = total / 5;
    double percentage = (total / 500) * 100;

    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
