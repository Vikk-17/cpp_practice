// Create a program to calculate the square roots of the numbers
// 4    12.25   0.0121
// and output them.
// Then read a number from the keyboard and output the square root
// of this number.
// To calculate the square root, use sqrt(), which is defined by 
// the following prototype in the math.h or(cmath) header file:
// double sqrt(double x);
// The return value of the sqrt() function is the square root of x.
/*  
Number      Square Root
4               2
12.25           3.5
0.0121          0.11
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
    string s("\nSquare root of given numbers"),
    s1("Loading..."),
    prompt("What's your random number: "),
    num("Number"), sq_rt("Squre Root"),
    line(30, '-');
    int a = 4;
    float b = 12.25;
    double c = 0.0121;
    double x;

    cout << s << endl << line << endl;
    cout << "\n";
    cout << num << "\t\t" << sq_rt << endl;
    cout << a << "\t\t" << sqrt(a) << endl
    << b << "\t\t" << sqrt(b) << endl
    << c << "\t\t" << sqrt(c) << endl;

    cout << line << endl
    << "Let's read a number from keyboard ..." << endl;

    //Input
    cout << prompt;
    cin >> x;

    //Output
    cout << s1 << endl << "Your number is " << x << endl
    << "And square root is " << sqrt(x) << endl;
    return 0;
}