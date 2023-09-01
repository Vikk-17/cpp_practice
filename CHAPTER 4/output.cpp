// Enter a character and outputs its octal, decimal and hexadecimal code.

#include <iostream> // Declaration of cin and cout
#include <iomanip>  // For manipulators being called with arguements
#include <string>
using namespace std;

int main()
{
    int number = ' ';
    cout << "The white space code is as follows: " << number << endl;

    char ch;
    string prompt = "\nPlease enter a character followed by <return>: ",
    s = "Spring flowers";

    bool ok = true;
    
    //cout << prompt;

    //cin >> ch;   // Read a character
    number = ch; // Assign the input character to number. ASCII value
    // cout << "The character " << ch << " has code " << number << endl;

    // cout << uppercase // For hex-digits
    //      << "   octal  decimal  hexadecimal\n "
    //      << oct << setw(8) << number
    //      << dec << setw(8) << number
    //      << hex << setw(8) << number << endl;
    
    // cout << left << setfill('?') << setw(20) << s;
    cout << ok << endl
         << boolalpha << ok << endl;
    // By default << operator outputs the boolean values as integrs(0 = false, 1 = true)
    // If I need to output the string itself then I have to put the manipulator 
    //(boolapha or noboolalpha)
    return 0;
}