#include <iostream>
using namespace std;

int main(){
    int hoursWorked, overtimeHours;
    double hourlyWage, weeklyPay, overtimePay;
    const double OVERTIME_RATE = 1.50;

    cout << "Enter hours worked: ";
    cin >> hoursWorked;
    cout << "Enter hourly wage: ";
    cin >> hourlyWage;

    if (hoursWorked > 40){
        overtimeHours = hoursWorked - 40;
        overtimePay = overtimeHours * OVERTIME_RATE;
        weeklyPay = (40 * hourlyWage) + overtimePay;
    }
    else{
        weeklyPay = hoursWorked * hourlyWage;
    }

    cout << "\nYour pay for the week is: $" << weeklyPay;

    // awawa

    return 0;

}