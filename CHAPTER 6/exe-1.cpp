//Rewrite the EuroDoll.cpp program in this chapter 
//to replace both the for loops with while loops.


// Euro
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double rate = 1.5; // Exchange rate: one euro to dollar
    int euro = 1;
    cout << fixed << setprecision(2);
    cout << "\tEuro \tDollar\n";
    while( euro <= 5) {
        cout << "\t " << euro
             << "\t " << euro * rate << endl;
        ++euro;
    }
    return 0;
}