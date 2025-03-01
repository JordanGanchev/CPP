#include <string>
#include <iostream>
using namespace std;
int main()
{
    double balance = 0;
    string deposit;


    cout.setf(ios::fixed);
    cout.precision(2);

    while (cin >> deposit && deposit != "NoMoreMoney") {
        double depositNumber = stod(deposit);

        if (depositNumber < 0) {
            cout << "Invalid operation!" << endl;
            break;
        }

        balance += depositNumber;

        cout << "Increase: " << depositNumber << endl;
    }

    cout << "Total: " << balance << endl;
}