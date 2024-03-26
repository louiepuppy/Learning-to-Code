#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

ofstream print("salary.out");
ifstream ins("salary.txt");

// Prototype functions
void display_heading();
void read_data(string&, double&);
void compute_salary(double, double&, double&, double&);
void display_result(string, double, double, double, double);

void find_max(string, double, string&, double&);
void find_min(string, double, string&, double&);
void display_max(string, double);
void display_min(string, double);

int main() {
    string name, maxName, minName;

    double salary, taxPaid, hours, netPay, maxPay = -9, minPay = 99999, hours;
    display_heading();

    do {
        read_data(name, hours);
        compute_salary(hours, salary, taxPaid, netPay);
        display_result(name, hours, salary, taxPaid, netPay);
        find_max(name, netPay, maxName, maxPay);
        find_min(name, netPay, minName, minPay);
    } while (!ins.eof()); 

    return 0;
}