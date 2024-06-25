/*
    4. Write a C++ program that takes three integer inputs from the user and outputs the largest and the smallest numbers among them.
*/

#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout << "Enter three numbers separated by a space : ";
    std::cin >> num1 >> num2 >> num3;

    if(num1 > num2 && num1 > num3){
        cout << num1 << " is the largest.\n";
        if(num2 < num3){
            cout << num2 << " is the smallest.\n";
        }else{
            cout << num3 << " is the smallest\n";
        }
    }else if(num2 > num1 && num2 > num3){
        cout << num2 << " is the largest.\n";
        if(num1 < num3){
            cout << num1 << " is the smallest.\n";
        }else{
            cout << num3 << " is the smallest\n";
        }
    }else{
        cout << num3 << " is the largest.\n";
        if(num1 < num2){
            cout << num1 << " is the smallest.\n";
        }else{
            cout << num2 << " is the smallest\n";
        }
    }

    return 0;
}