#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile;
    string name;
    int grade1, grade2, grade3, grade4, grade5;
    float averageGrade;
    char letterGrade, eatTheNewLine;

    inFile.open("Data/lab5data.txt");

    if (!inFile.is_open()) {
        cout << "ERROR: Could not open file.";
        return 1;
    } 

    cout << setw(22) << left << "Name" << right << "Average" << setw(22) << "Letter Grade" << endl;

    while (true) {
        getline(inFile, name);
        inFile >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
        inFile >> eatTheNewLine;

        averageGrade = (grade1 + grade2 + grade3 + grade4 + grade5) / 5.00;
        letterGrade = (averageGrade >= 90)? 'A' : (averageGrade >= 80)? 'B' : (averageGrade >= 70)? 'C' : (averageGrade >= 60)? 'D' : 'F';

        cout << fixed << setprecision(2);
        cout << setw(23) << left << name << right << averageGrade << setw(17) << letterGrade << endl;
        // womp womp
        if (inFile.eof()) {
            break;
        } else if (inFile.fail()) {
            cout << "ERROR: Could not read file.";
            return 1;
        }
    }

    inFile.close();

    return 0;
}