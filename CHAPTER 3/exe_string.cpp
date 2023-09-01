// Create a C++ program that defines a string containing the following char
// sequence: I have learned something new again!
// and displays the length of the string on screen.

// Read two lines of text from the keyboard.
// Concatenate the strings using " * " to separate
// the two parts of the string.
// Output the new string on screen.

#include<iostream>
#include<string>

using namespace std;
int main() {
    string s("\nI have learned something new again!");
    string s1("Write statement 1: "), s2("Write statement 2 : ");
    cout << s << endl
    << "Length of the line is " << s.length() << " Characters!" << endl;

    cout << s1;
    getline(cin, s1);

    cout << s2;
    getline(cin, s2);

    cout << s1 << " * " << s2 << endl;

    return 0; 
}