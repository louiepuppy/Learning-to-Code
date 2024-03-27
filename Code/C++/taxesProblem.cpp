#include <iostream>
#include <iomanip>
using namespace std;

// Global constants for the state and county tax rates
const float STATE_TAX_RATE = 0.04;
const float COUNTY_TAX_RATE = 0.02;

// The getPurchase module gets purchase amount and stores it
float getPurchase() {
    float tax;
    cout << "Enter the purchase amount: ";
    cin >> tax;
    return tax;
}

// The setStateTax module sets the State Tax Rate and stores it
float setStateTax(float purchase) {
    float tax = purchase * STATE_TAX_RATE;
    return tax;
}

// The setCountyTax module sets the County Tax Rate and stores it
float setCountyTax(float purchase) {
    float tax = purchase * COUNTY_TAX_RATE;
    return tax;
}

// The showSale module accepts purchase, stateTax, countyTax as arguments
void showSale(float purchase, float stateTax, float countyTax) {
    float totalTax, totalSale;

    totalTax = stateTax + countyTax;
    totalSale = purchase + totalTax;

    cout << fixed << showpoint << setprecision(2);
    cout << "Purchase: $" << purchase << endl;
    cout << "State Tax: $" << stateTax << endl;
    cout << "County Tax: $" << countyTax << endl;
    cout << "Total Tax: $" << totalTax << endl;
    cout << "Total: $" << totalSale << endl;
}

// main module
int main() {
    float purchase, stateTax, countyTax;

    /*
    I didn't use ref variables as I believe they are unnecessary for this problem
    */

    // Get the amount of the purchase
    purchase = getPurchase();

    // Calculate the state tax
    stateTax = setStateTax(purchase);

    // Calculate the county tax
    countyTax = setCountyTax(purchase);

    // Display information about the sale
    showSale(purchase, stateTax, countyTax);

    return 0;
}


