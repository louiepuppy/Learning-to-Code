// Include header files
#include <iostream>
#include <iomanip>
using namespace std;

// Info about main program
int main(){
    cout << "Hello, World!\n\n";

    // Declare variables
    int choice;
    double ballsHit, battingAverage, food, grossPay, hoursWorked, payRate, tax, timesAtBat, tip, total;
    const double TAX_RATE = 0.07; const double TIP_RATE = 0.15;

    cout << "Enter 1 for Gross Pay Calculator.\nEnter 2 for Batting Average Calculator.\nEnter 3 for Food Pricing.\nEnter 4 for User Info.\n";
    cin >> choice;

    // If choice == 1, 2, etc. execute block. Else end program.
    switch(choice){
        case(1):
            cout << "Enter number of hours worked: ";
            cin >> hoursWorked;
            cout << "Enter hourly rate: ";
            cin >> payRate;
            cout << setprecision(2) << fixed << showpoint;
            grossPay = hoursWorked*payRate;
            cout << "Gross pay is: $" << grossPay;
            break;
        case(2):
            cout << "Enter times at bat: ";
            cin >> timesAtBat;
            cout << "Enter balls hit: ";
            cin >> ballsHit;
            cout << setprecision(2) << fixed << showpoint;
            battingAverage = ballsHit / timesAtBat;
            cout << "Batting average is: " << battingAverage;
            break;
        case(3):
            cout << "Enter price of food: ";
            cin >> food;
            tip = food * TIP_RATE;
            tax = food * TAX_RATE;
            total = food + tip + tax;
            cout << setprecision(2) << fixed << showpoint;
            cout << "\nPrice of food: $" << food << "\nTip: $" << tip << "\nTax: $" << tax << "\nTotal cost: $" << total;
            break;
        case(4):
            cout << "Jack Shepard\n123 Lost Lane\nBoston, MA 99999\n(704)555-1212\nComputer Science";
            break;
        default:
            cout << "Invalid input.";
            break;
    }
    return 0;
}