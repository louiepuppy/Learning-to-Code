#include <iostream>
#include <vector>
#include <iomanip>


// CGPA CALCULATOR PROGRAM
int main() {
	std::vector<int> gradesVector;										// initializes vector with type int
	float cgpa;
	int numClasses;
	int grade;
	int sum;

	std::cout << "Enter number of classes taken: ";
	std::cin >> numClasses;

	for (int i = 0; i < numClasses; i++) {								// "int i = 0" initialize int i with 0 and loop until numClasses - 1 is reached
		std::cout << "Enter grade for class " << i + 1 << ": ";			// ask user to input grade for class i
		std::cin >> grade;												// store grade in grade variable
		gradesVector.push_back(grade);									// add grade to gradesList vector (aka a list)
	}

	sum = 0;
	for (int i = 0; i < gradesVector.size(); i++) {						// "int i = 0" initialize int i with 0 and loop until gradesList.size() - 1 is reached
		sum += gradesVector[i];											// add each grade in vector together until total is calculated
	}

	cgpa = (float)sum / gradesVector.size();							// calculates cgpa

	std::cout << "Your CGPA is: " << std::fixed << std::setprecision(2) << cgpa << std::endl;

	return 0;
}