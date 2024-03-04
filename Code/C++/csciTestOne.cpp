#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream inFile;
	string rawData, yardLocation, yard;
	float  areaOccupiedByTrees;
	int treesToPlant, totalTreesPlanted, yardLength, treeRadius, treeSpace;

	inFile.open("Data/yardData.txt");

	if (!inFile.is_open()) {
		cout << "ERROR: Could not open file." << endl;
		return 1;
	}

	cout << "Here is the detailed information about the yard and the trees:" << endl << endl;

	while (!inFile.eof()) {
		inFile >> yardLocation;
		inFile >> yard;
		inFile >> yardLength;
		inFile >> treeRadius;
		inFile >> treeSpace;
		cout << fixed << setprecision(2) << showpoint;
		cout << setw(5) << " " << setw(25) << left << "Yard Type: " << setw(10) << internal << yardLocation << " " << yard << endl;
		cout << setw(5) << " " << setw(25) << left << "Yards Length: " << setw(10) << internal << yardLength << endl;
		cout << setw(5) << " " << setw(25) << left << "Tree Radius: " << setw(10) << internal << treeRadius << endl;
		cout << setw(5) << " " << setw(25) << left << "Distance between Trees: " << setw(10) << internal << treeSpace << endl << endl;

		treesToPlant = yardLength / (treeRadius * 2 + treeSpace);
		areaOccupiedByTrees = (3.14159 * pow(treeRadius, 2)) * treesToPlant;

		cout << "The number of Trees that can be planted for " << yardLocation << " " << yard << " is " << treesToPlant << endl;
		cout << "Total area occupied by the trees: " << areaOccupiedByTrees << endl << endl;

		totalTreesPlanted += treesToPlant;

		if (inFile.eof()) {
			break;
		}
	}

	inFile.close();

	cout << "Total Number of Trees that can be planted is " << totalTreesPlanted << endl;

	return 0;
}