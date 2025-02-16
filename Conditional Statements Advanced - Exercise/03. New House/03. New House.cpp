#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double ROSE = 5.00;
    const double DAHLIA = 3.80;
    const double TULIP = 2.80;
    const double DAFFODIL = 3.00;
    const double GLADIOLUS = 2.50;

    string typeFlower;
    int flower, budget;
    cin >> typeFlower >> flower >> budget;

    double price = 0.0;

    if (typeFlower == "Roses") {
        price = flower * ROSE;
        if (flower > 80) {
            price *= 0.9;
        }
    }
    if (typeFlower == "Dahlias") {
        price = flower * DAHLIA;
        if (flower > 90) {
            price *= 0.85;
        }
    }
    if (typeFlower == "Tulips") {
        price = flower * TULIP;
        if (flower > 80) {
            price *= 0.85;
        }
    }
    if (typeFlower == "Narcissus") {
        price = flower * DAFFODIL;
        if (flower < 120) {
            price *= 1.15;
        }
    }
    if (typeFlower == "Gladiolus") {
        price = flower * GLADIOLUS;
        if (flower < 80) {
            price *= 1.2;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= price) {
        cout << "Hey, you have a great garden with " << flower << " " << typeFlower << " and " << budget - price << " leva left." << endl;
    }
    else {
        cout << "Not enough money, you need " << abs(budget - price) << " leva more." << endl;
    }
}
