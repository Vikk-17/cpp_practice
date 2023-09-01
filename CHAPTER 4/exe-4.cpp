/*Write a C++ program that reads any given character code (a positive integer)
from the keyboard and displays the corresponding character and the character
code as a decimal, an octal, and a hexadecimal on screen.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned char c = 0;
    unsigned int code = 0;
    cout << "\nPlease enter a decimal character code: ";
    cin >> code;
    c = code; // Save for output
    cout << "\nThe corresponding character: " << c << endl;
    // cout << dec << number << endl
    //      << uppercase << hex << number << endl
    //      << oct << number << endl;
    code = c; // Character code. Is only
    // necessary, if input is > 255.
    cout << "\nCharacter codes"
         << "\n decimal: " << setw(3) << dec << code
         << "\n octal: " << setw(3) << oct << code
         << "\n hexadecimal: " << setw(3) << hex << code
         << endl;
    return 0;
}