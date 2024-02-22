#include <iostream>
#include <iomanip>

int main() {
	float mealCost, tax, tip, total;
	const float TIP_RATE = 0.15;
	const float TAX_RATE = 0.07;

	std::cout << "Enter the meal cost: ";
	std::cin >> mealCost;

	tax = mealCost * TAX_RATE;
	tip = mealCost * TIP_RATE;
	total = mealCost + tax + tip;

	std::cout << std::setw(25) << std::setfill('*') << std::endl;

	std::cout << std::setfill(' ');

	std::cout << std::setprecision(4) << std::setw(25) << std::left << "Subtotal" << std::right << "$" << mealCost << std::endl;
	std::cout << std::setprecision(5) << std::setw(25) << std::left << "Tax" << std::right << "$" << tax << std::endl;
	std::cout << std::setprecision(6) << std::setw(25) << std::left << "Tip" << std::right << "$" << tip << std::endl;
	std::cout << std::setw(25) << std::left << "Total" << std::right << "$" << total << std::endl;

	// owo

	return 0;
}
