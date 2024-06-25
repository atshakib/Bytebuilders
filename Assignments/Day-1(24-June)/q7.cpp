/*
    7. Write a C++ program to swap the values of two variables without using a third variable.
*/

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter two numbers separated by a space: ";
    cin >> a >> b;
    cout << "The numbers before swap : " << a << " " << b << endl;

    a = a + b;
    b = a - b; 
    a = a - b;

    cout << "The numbers after swap : " << a << " " << b << endl;
    return 0;
}