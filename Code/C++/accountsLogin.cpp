#include <iostream>
#include <string>
#include <vector>

// Login function
static bool login_handler(std::string user, std::string pass, bool logged) {
	if (user == "admin" && pass == "<PASSWORD>") {
		return logged == true;
	}
	else {
		return logged == false;
	}
}


// registration/login program
int main() {

	std::string username;
	std::string password;
	short choice;
	bool loggedIn = false;

	while (true) {
		if (!loggedIn) {
			// menu
			std::cout << "********MENU********\n" << "1. Login\n" << "2. Register\n" << "5. Exit\n";
			std::cout << "********************\n" << "Enter your choice: ";
			std::cin >> choice;
			std::cout << std::endl;
			// login
			switch (choice) {
			case 1:
				std::cout << "Enter username: ";
				std::cin >> username;
				std::cout << "\n Hello, " << username << ".\nEnter password: ";
				std::cin >> password;
				std::cout << login_handler(username, password, loggedIn);
				break;
			default:
				std::cout << "Invalid choice.";
				break;
			}
		}
		else {
			// account menu
			std::cout << "********ACCOUNT MENU********\n" << "1. Logout\n" << "2. Change Password\n" << "5. Exit\n";
			std::cout << "********************\n" << "Enter your choice: ";
			std::cin >> choice;
			std::cout << std::endl;
			// logout
		}
	}

	return 0;
}