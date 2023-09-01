// To use strings

#include<iostream>  // Declaration of cin and cout
#include<string>    // Declaration of class string
using namespace std;

int main() {
    
    // Initializations
    string prompt("What is your name: "),
    name, line(40, '-'), total = "Hello ";

    // Taking input
    cout << prompt;
    getline(cin, name);
    total += name;

    //printing output
    cout << line << endl
        << total << endl;
    cout << "Your name is " << name.length() << " characters long!" << endl
        << line << endl; 
    return 0;
}