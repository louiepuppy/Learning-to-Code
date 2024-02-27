#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

int main() {
    float overSpeed, fine, speedLimit, drivingSpeed;
    std::string name;
    // Assign an input file
    std::ifstream inputFile;

    // Open the input file
    inputFile.open("Data/speeding.txt");

    // Assign an output file
    std::ofstream outfile;
    outfile.open("speedingOutput.txt");

    getline(inputFile, name);

    inputFile >> speedLimit;

    inputFile >> drivingSpeed;

    overSpeed = speedLimit - drivingSpeed;

    if (overSpeed > 0 && overSpeed <= 5) {
        fine = 20.00;
    } else if (overSpeed > 5 && overSpeed <= 10) {
        fine = 75.00;
    } else if (overSpeed > 10 && overSpeed <= 15) {
        fine = 150.00;
    } else if (overSpeed > 15) {
        fine = 150 + 20.00 * (overSpeed - 15.00);
    }

    std::cout << std::endl << "Driver: " << name << std::endl;
    std::cout << "Speed limit: " << speedLimit << std::endl;
    std::cout << "Driving speed: " << drivingSpeed << std::endl;
    std::cout << "Over speed: " << overSpeed << std::endl;
    std::cout << "Fine: " << fine << std::endl;

    // Sending to output file
    outfile << std::endl << "Driver: " << name << std::endl;
    outfile << "Speed limit: " << speedLimit << std::endl;
    outfile << "Driving speed: " << drivingSpeed << std::endl;
    outfile << "Over speed: " << overSpeed << std::endl;
    outfile << "Fine: " << fine << std::endl;
    
    return 0;
}