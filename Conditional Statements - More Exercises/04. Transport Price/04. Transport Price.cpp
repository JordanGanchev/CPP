
#include <iostream>
using namespace std;

int main()
{
    int numberKilometer;
    string day;

    cin >> numberKilometer >> day;
    double price = 0;

    if (numberKilometer < 20) {
        if (day == "day") {
            price = 0.7 + numberKilometer * 0.79;
        }
        else
        {
            price = 0.7 + numberKilometer * 0.9;
        }
    }
    else if (numberKilometer >= 20 && numberKilometer < 100) {
        price = numberKilometer * 0.09;
    }
    else if (numberKilometer >= 100) {
        price = numberKilometer * 0.06;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << price << endl;
}
