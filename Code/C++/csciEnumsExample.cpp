#include <iostream>
#include <string>
using namespace std;

// Global Variable - birdType
enum birdType {PEACOCK, SPARROW, CANARY, PARROT, 
PENGUIN, OSTRICH, EAGLE, CARDINAL, HUMMINGBIRD, None};

int main() {
    birdType bird = None;
    string birdName, myBird;
    char repeat = 'Y';

    while (repeat == 'Y' || repeat == 'y') {
        cout << "\nEnter name of the bird \n";
        cout << "(PEACOCK, SPARROW, CANARY, PARROT," <<
        " PENGUIN, OSTRICH, EAGLE, CARDINAL, HUMMINGBIRD): ";
        cin >> birdName;

        for (int i = 0; i < birdName.length(); i++) {
            birdName[i] = toupper(birdName[i]);
        }

        if (birdName == "PEACOCK"){
            bird = PEACOCK;
        } else if (birdName == "SPARROW"){
            bird = SPARROW;
        } else if (birdName == "CANARY"){
            bird = CANARY;
        } else if (birdName == "PARROT"){
            bird = PARROT;
        } else if (birdName == "PENGUIN"){
            bird = PENGUIN;
        } else if (birdName == "OSTRICH"){
            bird = OSTRICH;
        } else if (birdName == "EAGLE"){
            bird = EAGLE;
        } else if (birdName == "CARDINAL"){
            bird = CARDINAL;
        } else if (birdName == "HUMMINGBIRD"){
            bird = HUMMINGBIRD;
        } else {
            cout << "You entered invalid bird name..." << endl;
            bird = None;
        }

        // Display bird name
        switch (bird) {
            case PEACOCK:
                myBird = "PEACOCK";
                break;
            case SPARROW:
                myBird = "SPARROW";
                break;
            case CANARY:
                myBird = "CANARY";
                break;
            case PARROT:
                myBird = "PARROT";
                break;
            case PENGUIN:
                myBird = "PENGUIN";
                break;
            case OSTRICH:
                myBird = "OSTRICH";
                break;
            case EAGLE:
                myBird = "EAGLE";
                break;
            case CARDINAL:
                myBird = "CARDINAL";
                break;
            case HUMMINGBIRD:
                myBird = "HUMMINGBIRD";
                break;
        }
        if (bird != None){
            cout << "\nThe bird is " << myBird << endl;
        }
        cout << "Would you like to try again (y/n): ";
        cin >> repeat;
    }


    return 0;
}