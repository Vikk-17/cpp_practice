#include<iostream>
using namespace std;
int gvar1 = 100; // global variable
int main() {
    //cout<<"Hello World.";
    int a(10);
    //int a = 10; local variable initialization
    cout << a << "\n";
    cout << gvar1;
    return 0;
}