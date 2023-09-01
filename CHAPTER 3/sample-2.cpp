// // Output three random numbers
// #include<iostream> // Declaration of cin and cout
// #include<cstdlib> // Prototypes of srand(), rand(): 
// // void srand(unsigned int seed);
// // int rand(void);
// using namespace std;
// int main() {
//     unsigned int seed;
//     int z1, z2, z3;
//     cout << "  --- Random Numbers  ---  \n" << endl;
//     cout << "To initialize the random number generator, "
//         << "\n please enter an integer value: ";
//     cin >> seed;    // Input an integer

//     srand(seed);    // and use it as argument for a
//                     // new sequence of random numbers.

//     z1 = rand();
//     z2 = rand();    //Compute three random numbers
//     z3 = rand();

//     cout << "\nThree random numbers: "
//         << z1 << "  " << z2 << "    " << z3 << endl;
//     return 0;
// }

// Functions without arguments
#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
    int x = rand();
    int y = rand();
    int z = rand();
    int a = rand();
// They always create the same sequence of numbers 
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << a << endl;
    
    return 0;
}