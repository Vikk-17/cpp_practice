// Output the fine for drivng too fast

#include <iostream>
using namespace std;
int main()
{
    float limit, speed, toofast;
    cout << "\nSpeed limit: ";
    cin >> limit;
    cout << "\nSpeed: ";
    cin >> speed;

    if ((toofast = speed - limit) < 10)
        cout << "You were luck!" << endl;
    else if (toofast < 20)
            cout << "Fine payable: 40,-. Dollars" << endl;
    else if (toofast < 30)
            cout << "Fine payable: 80,-. Dollars" << endl;
    else cout << "Hand over your driver's licence!" << endl;
    
    return 0;
}