#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// fixed << setprecision(2)
// 10.567 > 10.57
// setprecision(2)
// 10.567 > 10

int main() {
    const float ADULT_PRICE = 10.00;
    const float CHILD_PRICE = 6.00;
    const int THEATER_PERCENT = 20;
    int adultTickets, childTickets;
    string movieTitle;
    float grossProfit, theaterProfit, distributerProfit;

    cout << "Enter the movie name: ";
    getline(cin, movieTitle);

    cout << "Enter the number of adult tickets: ";
    cin >> adultTickets;

    cout << "Enter the number of child tickets: ";
    cin >> childTickets;

    grossProfit = (adultTickets * ADULT_PRICE) + (childTickets * CHILD_PRICE);

    theaterProfit = grossProfit * THEATER_PERCENT / 100;

    distributerProfit = grossProfit - theaterProfit;

    cout << fixed << setprecision(2) << endl;
    cout << setw(30) << left << "Movie name: " << right << "\"" << movieTitle << "\"" << endl;
    cout << setw(34) << left << "Adult tickets sold: " << right << adultTickets << endl;
    cout << setw(34) << left << "Child tickets sold: " << right << childTickets << endl;
    cout << setw(30) << left << "Gross box office profit: " << right << "$" << grossProfit << endl;
    cout << setw(30) << left << "Net box office profit: " << right << "$" << theaterProfit << endl;
    cout << setw(30) << left << "Amount paid to distributer: " << right << "$" << distributerProfit << endl;

    // awawawawawaawaawaawaawaawaawaawaawaawaawaawaawaawaawaawaawaawa
    return 0;
}