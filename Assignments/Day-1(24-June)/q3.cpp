/*
    3. Write a C++ program that takes the user's name as input and outputs a personalized greeting.
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Assalamu Alaikum, " << name;
    return 0; 
}