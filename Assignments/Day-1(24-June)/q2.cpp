/*
    2. Write a C++ program that takes an integer input from the user and checks if it is even or odd.
*/

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (num % 2 == 0){
        cout << "The number is even.";
    }else{
        cout << "The number is odd.";
    }
    return 0;
}