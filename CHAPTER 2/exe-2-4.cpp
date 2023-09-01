// Write a c++ program that two defines var for floating-point numbers and initializes
// them with the values 123.456 and 76.543
// Then display the summ and the difference of these two numbers on screen

#include<iostream>
using namespace std;
int main() {
    double x(123.456), y(76.543);
    cout<< x << " " << y << endl
        << x + y << endl
        << x - y << endl;
    
    return 0;
}