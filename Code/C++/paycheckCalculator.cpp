#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int choice, hoursWorked, hourlyPay;
    double afterTax, eduAmount, parentAmount, pay, personalAmount, taxCut;
    const double EDUCATION_CUT = 0.5;
    const double PARENTS_CUT = 0.4;
    const double PERSONAL_CUT = 0.1;
    const double TAX_PERCENT = 0.35;

    while (true){

        cout << "\n--------------MENU--------------";
        cout << "\nEnter 1 for wage calculator.\nEnter 2 for pay cut calculator.\nEnter 3 for 1099 tax calculator.\nEnter 5 to end the program.\n";
        cout << "--------------------------------" << endl << endl;
        cin >> choice;

        switch(choice){
            case(1):
                cout << "\nEnter hours worked: ";
                cin >> hoursWorked;
                cout << "Enter hourly pay: ";
                cin >> hourlyPay;

                pay = hoursWorked * hourlyPay;

                cout << "Total pay is: $" << pay << endl;
                break;
            case(2):
                cout << "\nEnter amount paid: ";
                cin >> pay;
                eduAmount = pay * EDUCATION_CUT;
                parentAmount = pay * PARENTS_CUT;
                personalAmount = pay * PERSONAL_CUT;

                cout << setprecision(2)<<fixed<<showpoint;
                cout << "Amount for education: $" << eduAmount << endl;
                cout << "Amount for parents: $" << parentAmount << endl;
                cout << "Amount for personal use: $" << personalAmount << endl;
                break;
            case(3):
                cout << "\nEnter amount paid: ";
                cin >> pay;
                taxCut = pay * TAX_PERCENT;
                afterTax = pay - taxCut;
                    
                cout << setprecision(2)<<fixed<<showpoint;
                cout << "Amount set aside for tax: $" << taxCut << endl;
                cout << "Amount left after taxes: $" << afterTax << endl;
                break;
            case(5):
                return 0;
            default:
                cout << "\nTry again." << endl;
                continue;
        } 
    }
    return 0;
}