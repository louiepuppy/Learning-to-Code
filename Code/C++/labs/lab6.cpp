#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void getName(ifstream &inFile, string &name) {
    getline(inFile, name);
}

int findLowest(int score1, int score2, int score3, int score4, int score5) {
    int scores[] = {score1, score2, score3, score4, score5};
    int low = score1;

    for (int i = 1; i < 5; ++i) {
        if (scores[i] < low) {
            low = scores[i];
        }
    }

    return low;
}

char getLetterGrade(double average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}


float calcAverage(int score1, int score2, int score3, int score4, int score5) {
    int low = findLowest(score1, score2, score3, score4, score5);

    return static_cast<float>(score1 + score2 + score3 + score4 + score5 - low) / 4.0;
}

void getScore(ifstream &inFile, float &score) {
    int v, w, x, y, z;

    inFile >> v;
    inFile >> w;
    inFile >> x;
    inFile >> y;
    inFile >> z;
    inFile.ignore();

    score = calcAverage(v, w, x, y, z); 
}


int main() {
    ifstream inFile;
    ofstream outFile;
    string name;
    int numStudents;
    float score, classAvg, classTotal;
    char letterGrade;

    inFile.open("C:\\Users\\louie\\Downloads\\GitHub\\Learning-to-Code\\Code\\C++\\Data\\lab6data.txt");
    outFile.open("C:\\Users\\louie\\Downloads\\GitHub\\Learning-to-Code\\Code\\C++\\Data\\lab6output.txt");
    if (!inFile.is_open() || !outFile.is_open()) {
        cout << "Could not open file.";
        return 1;
    }

    outFile << fixed << setprecision(2);
    outFile << setw(40) << left << "Name" << right << setw(8) << "Average" << setw(25) << "Letter Grade" << endl;

    while (!inFile.eof()) {
        getName(inFile, name);
        getScore(inFile, score);
        letterGrade = getLetterGrade(score);
        outFile << setw(42) << left << name << right << score << setw(20) << letterGrade << endl;

        classTotal += score;
        ++numStudents;
    }
    classAvg = classTotal / numStudents;

    outFile << setw(75) << setfill('-') << '\n';
    outFile << setfill(' ') << setw(40) << left << "Class Average" << right << setw(7) << classAvg << endl;

    inFile.close();
    outFile.close();

    return 0;
}