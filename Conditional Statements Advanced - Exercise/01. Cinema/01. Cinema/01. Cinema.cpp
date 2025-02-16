#include <iostream>
using namespace std;

int main()
{
    string type;
    cin >> type;

    int rows, columns;
    cin >> rows >> columns;

    double ticketPrice = 0.0;

    if (type == "Premiere") {
        ticketPrice = 12;
    }
    else if (type == "Normal") {
        ticketPrice = 7.5;
    }
    else if (type == "Discount") {
        ticketPrice = 5;
    }

    int allSeats = rows * columns;
    double totalPrice = allSeats * ticketPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalPrice << " leva" << endl;
}

