#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double square_root_calculator(double x) {
	return sqrt(x);
}

int main() {
	double num;
	char choice;

	do {
		cout << "Enter a number: ";
		cin >> num;

		cout << "The square root of " << num << " is " << fixed << setprecision(2) << square_root_calculator(num) << endl;

		cout << "Do you want to calculate the square root of another number? (y/n): ";
		cin >> choice;
	}

	while (choice == 'y' || choice == 'Y');

	return 0;
}