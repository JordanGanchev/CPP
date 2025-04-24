

#include <iostream>
using namespace std;
int main()
{
    int mounths;
    double expense;

    cin >> mounths;

    double totalSum = 0.0, water = 0.0, internet = 0.0, other = 0.0;

    for (int i = 1; i <= mounths; i++) {
        cin >> expense;

        totalSum += expense;
        other += (expense + 35) * 1.2;
       
    }
    water += mounths * 20;
    internet += mounths * 15;

    cout.setf(ios::fixed);
    cout.precision(2);

    double anySum = (totalSum + water + internet + other) / mounths;
    cout << "Electricity: " << totalSum << " lv" << endl;
    cout << "Water: " << water << " lv" << endl;
    cout << "Internet: " << internet << " lv" << endl;
    cout << "Other: " << other << " lv" << endl;
    cout << "Average: " << anySum << " lv" << endl;


}

