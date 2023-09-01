// Write a C++ program that outputs a complete multiplication table 
//(as shown opposite) on screen.

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

const long delay = 100000000L;
int main() {
    string star(5, '*');
    
    cout << "\n" << setw(20) << star << " MULTIPLICATION TABLE " << star << endl;
    cout << "\n" << endl;
    cout << "   ";
    
    for(int i = 1; i < 11; ++i) cout << setw(5) << i;
    cout << "\n" << endl;
    
    for(int i = 1; i < 11; ++i) {
        cout << setw(2) << i << "|";
        for(int k = 0; k < delay; ++k) // to delay the output
            ;
        for(int j = 1; j < 11; ++j) cout << setw(5) << i * j;
        cout << endl;
    }
    return 0; 
}