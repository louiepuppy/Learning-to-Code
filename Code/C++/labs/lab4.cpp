#include <iostream>

using namespace std;

int main() {
    int inputMonth, inputYear, daysInMonth;

    cout << "Enter a month (1-12): ";
    cin >> inputMonth;

    switch (inputMonth) {
        case 2:
            cout << "Enter a year: ";
            cin >> inputYear;

            if (inputYear % 100 == 0) {
                if (inputYear % 400 == 0) {
                    daysInMonth = 29;
                } else {
                    daysInMonth = 28;
                }
            } else if (inputYear % 4 == 0) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            daysInMonth = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            cout << "ERROR: Invalid" << endl;
            break;
    }

    cout << daysInMonth << " days" << endl;

    return 0;
}