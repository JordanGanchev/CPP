#include <iostream>

using namespace std;

int main()
{
    const int spring = 3000;
    const int summerAutumn = 4200;
    const int winter = 2600;

    int budget;
    string season;
    int numberOfFish;

    cin >> budget >> season >> numberOfFish;

    double price;

    if (season == "Spring") {
        if (numberOfFish <= 6) {
            price = spring * 0.9;
        }
        else if (numberOfFish > 6 && numberOfFish <= 11) {
            price = spring * 0.85;
        }
        else if (numberOfFish >= 12) {
            price = spring * 0.75;
        }
    }
    if (season == "Summer" || season == "Autumn") {
        if (numberOfFish <= 6) {
            price = summerAutumn * 0.9;
        }
        else if (numberOfFish > 6 && numberOfFish <= 11) {
            price = summerAutumn * 0.85;
        }
        else if (numberOfFish >= 12) {
            price = summerAutumn * 0.75;
        }
    }
    if (season == "Winter") {
        if (numberOfFish <= 6) {
            price = winter * 0.9;
        }
        else if (numberOfFish > 6 && numberOfFish <= 11) {
            price = winter * 0.85;
        }
        else if (numberOfFish >= 12) {
            price = winter * 0.75;
        }
    }

    if (numberOfFish % 2 == 0 && season != "Autumn") {
        price *= 0.95;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= price) {
        cout << "Yes! You have " << budget - price << " leva left.";
    }
    else {
        cout << "Not enough money! You need " << price - budget << " leva.";
    }

}
