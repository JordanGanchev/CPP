#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int days, neededPoints, swimmers;
    double hotelPrice, participationFee;

    cin >> days >> neededPoints >> swimmers >> hotelPrice >> participationFee;

    vector<double> dailyPoints(days);
    for (int i = 0; i < days; ++i)
    {
        cin >> dailyPoints[i];
    }

    double hotelCost = days * swimmers * hotelPrice;
    double feeCost = swimmers * participationFee;
    double totalCost = hotelCost + feeCost;

    double totalPoints = 0;
    for (int i = 0; i < days; ++i)
    {
        totalPoints += dailyPoints[i];
        if (i > 0)
        {
            totalPoints += dailyPoints[i - 1] * 0.05;
        }
    }

    double sponsorCoverage = (totalPoints >= neededPoints) ? 0.25 : 0.10;
    double sponsorPays = totalCost * sponsorCoverage;
    double moneyLeft = totalCost - sponsorPays;

    cout << fixed << setprecision(2);
    cout << "Money left to pay: " << moneyLeft << " BGN." << endl;
    if (totalPoints >= neededPoints)
    {
        cout << "The championship was successful!" << endl;
    }
    else
    {
        cout << "The championship was not successful." << endl;
    }

    return 0;
}
