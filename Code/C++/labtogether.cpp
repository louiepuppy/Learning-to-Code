#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
    // Create and open files
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    int max, min;
    srand(time(0));

    inFile >> max >> min; // Read numbers from input file

    int x = (rand() % (max - min + 1)) + min;
    outFile << "Random number:\n" << x; // print to output file

    return 0;
}