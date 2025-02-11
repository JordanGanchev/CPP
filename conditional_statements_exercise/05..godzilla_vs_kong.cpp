#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double budget;
    cin >> budget;
    int number_statist;
    cin >> number_statist;
    double price_clothing;
    cin >> price_clothing;

    double sumDecor = budget * 0.1;
    double sumClothing = number_statist * price_clothing;
    
    if (number_statist >= 150) {
        sumClothing *= 0.9;
    }

    double sumMovie = sumDecor + sumClothing; 
    double remainder = budget - sumMovie;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (remainder >= 0) {
        cout << "Action!" << endl << "Wingard starts filming with " << remainder << " leva left." << endl;
    } else {
        cout << "Not enough money!" << endl << "Wingard needs " << abs(remainder) << " leva more." << endl;
        
    }
}