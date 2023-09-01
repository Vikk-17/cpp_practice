// Inputs an article label and a price

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
    string label;
    double price;

    cout << "\nPlease enter an article label: ";

    // Input the label (15 characters maximum starts from 0 to 15 i.e, total 16 chars):
    cin >> setw(16); // or cin.width(16);
    cin >> label; 
    
    cin.sync();     //Clear the buffer and resets
    cin.clear();    //any error flags that may be set

    cout << "\nEnter a price of the article: ";
    cin >> price;   //Input the price

    // Controlling output:
    cout << fixed << setprecision(2)
         << "\nArticle: "
         << "\n Label: " << label
         << "\n Price: " << price << endl;

    // ... The program to be continued
    return 0;
}