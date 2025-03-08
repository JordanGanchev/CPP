#include <iostream>
using namespace std;
int main()
{
    string season;
    double kilometer;

    cin >> season >> kilometer;

    double price = 0.00;

    if (kilometer <= 5000) {
        if (season == "Spring" || season == "Autumn") {
            price = 0.75;
        }
        else if (season == "Summer") {
            price = 0.9;
        }
        else if (season == "Winter") {
            price = 1.05;
        }
    }
    else if (kilometer > 5000 && kilometer <= 10000) {
        if (season == "Spring" || season == "Autumn") {
            price = 0.95;
        }
        else if (season == "Summer") {
            price = 1.10;
        }
        else if (season == "Winter") {
            price = 1.25;
        }
    }
    else if (kilometer > 10000 && kilometer <= 20000) {
        price = 1.45;
    }

    price *= 0.9;
    double totalCost = (price * kilometer) * 4;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalCost << endl;
}
