#include <iostream>
#include <random>

// Rock Paper Scissors game
int main() {
	unsigned short cpuChoice;
	unsigned short userChoice;

	std::random_device rd;											// object to seed the random number generator
	std::mt19937 gen(rd());											// object (Mersenne Twister engine) random number generator
	std::uniform_int_distribution<> dist(1, 3);						// pass to generator to generate a random integer between 1 and 3

	cpuChoice = dist(gen);											// CPU's choice is whatever the generator outputted

	std::cout << "Rock(1), Paper(2), Scissors(3), shoot! Enter choice: " << std::endl;
	std::cin >> userChoice;
	std::cout << std::endl;

	switch (cpuChoice) {
	case 1:
		std::cout << "CPU Chose: Rock\n";
		break;
	case 2:
		std::cout << "CPU Chose: Paper\n";
		break;
	case 3:
		std::cout << "CPU Chose: Scissors\n";
		break;
	default:
		std::cout << "Something went wrong.\n";
		break;
	}

	if (cpuChoice == userChoice) {
		std::cout << "It's a tie!\n";
	}
	else if (cpuChoice == 1 && userChoice == 2) {					// 1 = Rock, 2 = Paper, 3 = Scissors
		std::cout << "You Win!\n";
	}
	else if (cpuChoice == 2 && userChoice == 3) {
		std::cout << "You Win!\n";
	}
	else if (cpuChoice == 3 && userChoice == 1) {
		std::cout << "You Win!\n";
	}
	else {
		std::cout << "You Lost.\n";
	}

	return 0;
}