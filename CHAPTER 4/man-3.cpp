#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    //  Important: if line is using dual params than use single quote and
    //  if single params than use double qoute
    string line("|"), vl(10, '*'); // Single quote not double quote
    // cout << setw(10) << "|" << setw(6) << "X" << "|" << endl; // 1st Example
    // cout << fixed << setprecision(2) << setw(10)
    // << 123.4 << endl
    // << "1234567890" << endl;

    cout << vl << endl;
    cout << line << setw(10) << line << endl;
    cout << line << setw(10) << line << endl;
    cout << line << setw(5) << "x" << setw(5) << line << endl;
    cout << line << setw(10) << line << endl;
    cout << line << setw(10) << line << endl;
    cout << vl << endl;

    cout << setfill('x') << setw(5) << 12;
    return 0;
}