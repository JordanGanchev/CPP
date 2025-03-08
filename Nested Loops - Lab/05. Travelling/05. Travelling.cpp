#include <iostream>
using namespace std;
int main()
{
    string destination;
    double excursionPrice, money, saveMoney;

    while (cin >> destination && destination != "End") {
        cin >> excursionPrice;
        saveMoney = 0;

        while (saveMoney < excursionPrice) {
            cin >> money;
            saveMoney += money;
        }
        cout << "Going to " << destination<< "!" << endl;
    }
    return 0;

}
