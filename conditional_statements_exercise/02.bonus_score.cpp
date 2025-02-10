#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    double bonusPoints = 0.0;

    if (number <= 100) {
        bonusPoints = 5;
    }else if (number > 1000) {
        bonusPoints = 0.1 * number;
    }else {
        bonusPoints = 0.2 * number;
    }
    if (number % 2 == 0) {
        bonusPoints += 1;
    }else if (number % 10 == 5) {
        bonusPoints += 2;
    }

    cout << bonusPoints << endl;
    cout << number + bonusPoints << endl;
}