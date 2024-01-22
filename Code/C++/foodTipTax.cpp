#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // Declare variables for food charges, tip, tax, and total.
    double food, tip, tax, total;

    // Constants for the tax rate and tip rate.
    const double TAX_RATE = 0.07;
    const double TIP_RATE = 0.15;

    // Get the food charges.
    cout << "Enter price of food: ";
    cin >> food;
    tax = food*TAX_RATE;
    tip = food*TIP_RATE;

    // Calculate the total
    total = food + tip + tax;

    // Display the tip, tax, and total
    cout << setprecision(2) << fixed << showpoint;
    cout << "\nFood Cost: $" << food << "\nTip: $" << tip << "\nTax: $" << tax << "\nTotal: $" << total;

    return 0;
}
