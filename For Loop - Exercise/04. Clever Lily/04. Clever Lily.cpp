#include <iostream>
using namespace std;
int main()
{
    int age, toyPrice;
    double target;
   
    cin >> age >> target >> toyPrice;

    int saveMoney = 0, moneyGiftAmount = 10;

    for (int i = 1; i <= age; i++) {
        if (i % 2 == 0) {
            saveMoney += moneyGiftAmount - 1;
            moneyGiftAmount += 10;
        }
        else
        {
            saveMoney += toyPrice;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (saveMoney >= target) {
        cout << "Yes! " << saveMoney - target << endl;
    }
    else
    {
        cout << "No! " << target - saveMoney << endl;
    }
}