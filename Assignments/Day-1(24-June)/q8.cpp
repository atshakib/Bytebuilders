/*
    8. Write a C++ program that takes a character input from the user and checks if it is a vowel or a consonant.
*/

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character between a-z : ";
    cin >> ch;

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    } else if ((ch >= 'a' && ch <= 'z')) {
        cout << ch << " is a consonant." << endl;
    } else {
        cout << ch << " is not a letter." << endl;
    }
    return 0;
}