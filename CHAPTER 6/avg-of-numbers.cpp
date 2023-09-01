// average.cpp
// Computing the avergae of numbers

#include<iostream>
using namespace std;

int main() {
    // int x, count = 0;
    // float sum = 0.0;

    // cout << "Please enter some integers:\n"
    //         "(Break with any laters)"
    //     << endl;
    
    // while(cin >> x) {
    //     sum += x;
    //     ++count;
    // }
    // cout << "The average of the numbers: "
    //      << sum / count << endl;
    int count = 0;
    while (count < 10)
        cout << ++count << endl;

    cout << "\nusing postfix\n" << endl;
    
    int c = 1;
    while (c < 11)
        cout << c++ << endl;
    return 0;
}