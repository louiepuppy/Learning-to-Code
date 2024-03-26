#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];
    int count = 0;

    ifstream inFile("Data/arraysData.txt");

    if (!inFile.is_open()) {
        cout << "Could not open file";
        return 1;
    } else {
        while (count < NUM_EMPLOYEES && inFile >> hours[count]) {
            count++;
        }
        inFile.close();

        cout << "The hours worked by each employee are\n";
        for (int employee = 0; employee < count; employee++) {
            cout << "Employee " << employee + 1 << ": ";
            cout << hours[employee] << endl;
        }
    }

    return 0;
}