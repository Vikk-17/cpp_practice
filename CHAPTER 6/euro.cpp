// Euro
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double rate = 1.5; // Exchange rate: one euro to dollar
    cout << fixed << setprecision(2);
    cout << "\tEuro \tDollar\n";
    for(int euro = 1; euro <= 5; ++euro) {
        cout << "\t " << euro
             << "\t " << euro * rate << endl;
    }
    return 0;
}