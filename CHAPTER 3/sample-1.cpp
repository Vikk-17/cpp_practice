// Calculationg powers with the standard function pow()

#include<iostream>  // declration of cout
#include<cmath> // Prototype of pow()
using namespace std;

int main() {
    double x(2.5), y;

    // By means of a prototype, the compiler generates 
    // the correct call or an error message!
    // Computes x raised to the power 3 :
    //y = pow("x", 3.0); // Error
    //y = pow(x + 3.0);   // Error
    y = pow(x, 3.0);    //Okay
    //y = pow(x, 3);  // Okay but double will convert 3 to  3.0
    cout << "2.5 raised to 3 yeilds: " << y << endl;
    // Calculating with pow() is possible:
    cout << "2 + (5 raised to the power 2.5) yeilds: " << 2.0 + pow(5.0, x) << endl;
    return 0; 
}