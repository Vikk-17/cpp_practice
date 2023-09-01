// Demonstration of compound assignments
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    float x, y;

    cout << "\n Please enter a starting value:    ";
    cin >> x;

    cout << "\n Please enter the increment value:   ";
    cin >> y;
    x +=y; // x = 12(x = 10, y = 2)
    //cout << x;

    cout << "\n And now multiplication! ";
    cout << "\n Please enter a factor:  ";
    cin >> y;
    x *=y; // x = 48, if y = 4
    //cout << x;

    cout << "\n And finally division.";
    cout << "\n Please supply a divisor: ";
    cin >> y;
    x /=y;  // x = 24
    //cout << x;

    cout << "\n And this is "
         << "your current lucky number: " << fixed << setprecision(0)
         << x << endl;
    
    return 0;
}