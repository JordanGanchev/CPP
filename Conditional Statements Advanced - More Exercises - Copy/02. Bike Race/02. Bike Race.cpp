#include <iostream>
using namespace std;
int main()
{
    int numberJuniors, numberSeniors;
    string kindRoute;

    cin >> numberJuniors >> numberSeniors >> kindRoute;

    double price = 0.00;

    if (kindRoute == "trail") {
        price = (numberJuniors * 5.50) + (numberSeniors * 7.00);
    }
    else if (kindRoute == "cross-country") {
        price = (numberJuniors * 8.00) + (numberSeniors * 9.50);

        if (numberJuniors + numberSeniors >= 50) {
            price *= 0.75;
        }
    }
    else if (kindRoute == "downhill") {
        price = (numberJuniors * 12.25) + (numberSeniors * 13.75);
    }
    else if (kindRoute == "road") {
        price = (numberJuniors * 20.00) + (numberSeniors * 21.50);
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << price * 0.95;

}
