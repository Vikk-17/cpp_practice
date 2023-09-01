// Reads integral decimal values and generates octal, decimal and hexadecimal output

#include <iostream> // Declarations of cin, cout and manipulators oct, hex, ...
#include <string>
#include <iomanip> // for precision() or setprecision()
using namespace std;
int main()
{
    int num;
    string prompt("Please enter an integer: ");

    // Input
    cout << prompt;
    cin >> num;

    // Output
    // cout << uppercase   // for hex-digits or nouppercase(by default)
    // << " octal  \t  decimal    \t  hexadecimal\n "
    // << oct << num << "       \t "
    // << dec << num << "       \t "
    // << hex << num << endl;

    // uppercase, nouppercase
    // showpos, noshowpos
    // oct, hex, dec

    cout << uppercase << showpos
         << oct << num << endl
         << dec << num << endl
         << hex << num << endl;
    return 0;
}