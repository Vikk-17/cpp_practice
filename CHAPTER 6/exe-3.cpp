// Write a C++ program that reads an integer between 0 and 65535 from the
// keyboard and uses it to seed a random number generator.
// Then output 20 random numbers between 1 and 100 on screen.

#include<iostream>
#include<iomanip>
#include<cstdlib> // or #include<stdlib.h> for srand() and rand()
#define LIMIT 20
#define UPPER 65535
#define LOWER 0
using namespace std;

const long delay = 20000000L;
int main() {
    unsigned int i;
    int seed;
    while (true) { // cannot handle characters or alphabets
        cout << "Put an integer b/w 0 to 65535" << endl;
        cin >> seed;
        
        if(seed <= UPPER && seed >= LOWER) {
            
            // Seed the random number generator
            srand(seed); 
            cout << "\n\n       "
                    "*****  RANDOM NUMBERS  *****\n\n";

            // to print number of random numbers
            for(i = 1; i <= LIMIT; ++i) {

                // delay to print the output
                for(int k = 0; k < delay; ++k)
                    ;
                cout << setw(20) << i << ". Random number = "
                     << setw(3) << (rand() % 100 + 1) << endl;
            }
            break;
        }
        else {
            cout << seed << " is invalid" << endl;
            continue;
        }
    }
    return 0;
}