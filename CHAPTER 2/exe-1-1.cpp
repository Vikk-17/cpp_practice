/* The sizeof operator can be used to determine the number of bytes occupied
in memory by a variable of a certain type. For eg: sizeof(short) is equivalent to 2.
# Write a C++ program that display the memory space required by each fundamental type on screen*/
#include<iostream>
using namespace std;

int main() {
    cout << "\nSize of Fundamental Types\n";
    cout << "int: " << sizeof(int) << " byte" << endl
        << "float: " <<sizeof(float) << " byte" << endl
        << "char: " <<sizeof(char) << " byte" << endl
        << "double: " << sizeof(double) << " byte" << endl
        << "long: " <<sizeof(long) << endl
        << "short:" << sizeof(short) << endl
        << "long double: " << sizeof(long double) << " byte" << endl;
    return 0;
}