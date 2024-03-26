#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void print_menu() {
    cout << "1. Sell Coffee" << endl;
    cout << "2. Number of Coffee Cups Sold per Size" << endl;
    cout << "3. Number of Coffee Sold in oz" << endl;
    cout << "4. Total Money Made" << endl;
    cout << "5. Print Report to File" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your selection: ";

    return;
}

void sell_coffee(int& smallSold, int& mediumSold, int& largeSold, int smalloz, int mediumoz, int largeoz, double smallPrice, double mediumPrice, double largePrice) {
    int choice = -1, i = 0;
    cout << fixed << setprecision(2);

    while (choice != 0) {
        cout << "1. Small (" << smalloz << "oz) - $" << smallPrice << endl;
        cout << "2. Medium (" << mediumoz << "oz) - $" << mediumPrice << endl;
        cout << "3. Large (" << largeoz << "oz) - $" << largePrice << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your selection: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number of cups: ";
                cin >> i;
                smallSold += i;
                i = 0;
                cout << endl;
                break;
            case 2:
                cout << "Enter number of cups: ";
                cin >> i;
                mediumSold += i;
                i = 0;
                cout << endl;
                break;
            case 3:
                cout << "Enter number of cups: ";
                cin >> i;
                largeSold += i;
                i = 0;
                cout << endl;
                break;
            case 0:
                cout << endl << endl;
                cout << "Purchase Summary:" << endl;
                cout << "Small: " << smallSold << endl;
                cout << "Medium: " << mediumSold << endl;
                cout << "Large: " << largeSold << endl;
                cout << "Total: $" << (smallPrice * smallSold) + (mediumPrice * mediumSold) + (largePrice * largeSold) << endl;
                cout << endl << endl;
                break;

                return;
            default:
                cout << "Invalid selection" << endl;
                break;
        }
    }

}
void coffee_sold_size(int smallSold, int mediumSold, int largeSold) {
    cout << "Small: " << smallSold << endl;
    cout << "Medium: " << mediumSold << endl;
    cout << "Large: " << largeSold << endl;
    cout << endl;

    return;
}

void coffee_sold_oz(int smallSold, int mediumSold, int largeSold, int smalloz, int mediumoz, int largeoz) {
    int totaloz = (smallSold * smalloz) + (mediumSold * mediumoz) + (largeSold * largeoz);

    cout << "Total oz of Coffee sold: " << totaloz << endl << endl;

    return; 
}

void money_made(int smallSold, int mediumSold, int largeSold, double smallPrice, double mediumPrice, double largePrice) {
    float total = (smallSold * smallPrice) + (mediumSold * mediumPrice) + (largeSold * largePrice);

    cout << fixed << setprecision(2);
    cout << "Total money made: $" << total << endl << endl;

    return;
}

void print_report(int smallSold, int mediumSold, int largeSold, int smalloz, int mediumoz, int largeoz, double smallPrice, double mediumPrice, double largePrice) {
    ofstream ofs("C:\\Users\\louie\\Downloads\\GitHub\\Learning-to-Code\\Code\\C++\\Data\\lab7output.txt");

    if (!ofs.is_open()) {
        cout << "Could not open file" << endl;
        return;
    } else {
        ofs << fixed << setprecision(2);
        ofs << "Small: " << smallSold << " totaling " << smallSold * smalloz << "oz" << endl;
        ofs << "Medium: " << mediumSold << " totaling " << mediumSold * mediumoz << "oz" << endl;
        ofs << "Large: " << largeSold << " totaling " << largeSold * largeoz << "oz" << endl;
        ofs << "Total Earned: $" << (smallPrice * smallSold) + (mediumPrice * mediumSold) + (largePrice * largeSold) << endl;
        ofs.close();
    }

    return;
}

int main() {
    const double SMALL_PRICE = 1.75;
    const double MEDIUM_PRICE = 1.90;
    const double LARGE_PRICE = 2.00;
    const int SMALL_OZ = 9;
    const int MEDIUM_OZ = 12;
    const int LARGE_OZ = 15;
    int choice = -1, smallSold = 0, mediumSold = 0, largeSold = 0;
    double smallTotal = 0, mediumTotal = 0, largeTotal = 0;

    cout << endl;

    while (choice != 0) {
        print_menu();

        cin >> choice;
        cout << endl;
        cout << fixed << setprecision(2);

        switch (choice) {
        case 1:
            sell_coffee(smallSold, mediumSold, largeSold, SMALL_OZ, MEDIUM_OZ, LARGE_OZ, SMALL_PRICE, MEDIUM_PRICE, LARGE_PRICE);
            break;
        case 2:
            coffee_sold_size(smallSold, mediumSold, largeSold);
            break;
        case 3:
            coffee_sold_oz(smallSold, mediumSold, largeSold, SMALL_OZ, MEDIUM_OZ, LARGE_OZ);
            break;
        case 4:
            money_made(smallSold, mediumSold, largeSold, SMALL_PRICE, MEDIUM_PRICE, LARGE_PRICE);
            break;
        case 5:
            print_report(smallSold, mediumSold, largeSold, SMALL_OZ, MEDIUM_OZ, LARGE_OZ, SMALL_PRICE, MEDIUM_PRICE, LARGE_PRICE);
            break;
        case 0:
            cout << "Done.";
            break;
            return 0;
        default:
            cout << "Invalid choice." << endl << endl;
            break;
        }
    }
    

    return 0;
}