#include <iostream>
using namespace std;

int main()
{
    double money;
    int years;

    cin >> money >> years;

    double diffMoney = money;
    int diffYear = 18;

    for (int i = 1800; i <= years; i++) {
        if (i % 2 == 0) {
            diffMoney -= 12000;
        }
        else
        {
            double mid = (50 * diffYear) + 12000;
            diffMoney -= mid;

        }
        diffYear++;
       
       \
    }
    cout.setf(ios::fixed);
    cout.precision(2);

    if (diffMoney >= 0) {
        cout << "Yes! He will live a carefree life and will have " << diffMoney << " dollars left." << endl;
    }
    else
    {
        cout << "He will need " << -1 * diffMoney << " dollars to survive." << endl;
    }
}
