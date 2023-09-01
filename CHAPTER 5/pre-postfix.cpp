#include<iostream>
using namespace std;
int main() {
    int i(2), j(8);
    
    // i++ = print i and then increment by 1
    // ++i = print the incement value of i

    cout << i++ << endl;    // Output:  2
    cout << i << endl;    // Output:  3

    cout << j-- << endl;    // Output:  8 and j = 7
    cout << --j << endl;    // Output:  6
    return 0;
}