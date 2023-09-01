/*
Write a C++ program that reads an article number, a quantity, and a unit price
from the keyboard and outputs the data on screen as displayed on the opposite
page.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    double qty, price;

    cout << "\nArticle: ";
    cout << "\n Number: ";
    cin >> num;
    cout << "\n Quantity: ";
    cin >> fixed >> setprecision(2) >> qty;
    cout << "\n Unit Price: ";
    cin >> fixed >> setprecision(2) >> price;

    // cout << art_num << qty << price;
    cout << "Article Number"
         << setw(20) << "Number of Pieces"
         << setw(20) << "Price per Piece" << endl;

    cout << num << setw(22) << qty << setw(20) << price << " Dollar" << endl;

    return 0;
}