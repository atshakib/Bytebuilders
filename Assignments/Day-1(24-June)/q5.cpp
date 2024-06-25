/*
    5. Write a C++ program that takes the user's age as input and outputs whether the user is a child (age < 13), a teenager (age 13 to 19), or an adult (age >= 20).
*/

#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age < 13){
        cout << "User is a child.";
    }else if(age >= 13 && age <= 20){
        cout << "User is a teenager.";
    }else{
        cout << "User is an adult";
    }

    return 0;
}