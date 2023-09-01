#include <iostream>
#include <iomanip> // for precision() or setprecision()
using namespace std;
int main()
{
    float x = 12.0;

    // Precision 3 or cout << setprecision(3)
    cout.precision(3);
    cout << " By default:   " << x << endl;
    cout << " Showpoint:    " << showpoint << x << endl;
    cout << " Fixed:    " << fixed << x << endl;
    cout << " Scientific:    " << scientific << x << endl;

    return 0;
}