#include <iostream>
using namespace std;


int main()
{
    double budget;
    string season;

    cin >> budget >> season;

    string destination, accommodation;
    double spendPercentage = 0;

    if (budget <= 100) {
        destination = "Bulgaria";

        if (season == "summer") {
            accommodation = "Camp";
            spendPercentage = 0.3;
        }
        else if (season == "winter") {
            accommodation = "Hotel";
            spendPercentage = 0.7;
        }
    }
    else if (budget <= 1000) {
        destination = "Balkans";

        if (season == "summer") {
            accommodation = "Camp";
            spendPercentage = 0.4;
        }
        else if (season == "winter") {
            accommodation = "Hotel";
            spendPercentage = 0.8;
        }
    }
    else {
        destination = "Europe";
        accommodation = "Hotel";
        spendPercentage = 0.9;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Somewhere in " << destination << endl;
    cout << accommodation << " - " << budget * spendPercentage << endl;

}
