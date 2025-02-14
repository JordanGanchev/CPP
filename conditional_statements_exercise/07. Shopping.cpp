#include <iostream>

using namespace std;

int main()
{
    const int BUDGET = 250;

    double numberbBudget;
    cin >> numberbBudget;
    int videocard, processor, ram;
    cin >> videocard >> processor >> ram;

    double sumOfVideocard = videocard * BUDGET;
    double priceProcessor = (sumOfVideocard * 0.35) * processor;
    double priceram = (sumOfVideocard * 0.1) * ram;
    double totalSum = sumOfVideocard + priceProcessor + priceram;

    if (videocard > processor) {
        totalSum = totalSum * 0.85;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    double result = numberbBudget - totalSum;

    if (numberbBudget >= totalSum) {
        cout << "You have " << result << " leva left!";
    }
    else {
        cout << "Not enough money! You need " << abs(result) << " leva more!";
    }

}