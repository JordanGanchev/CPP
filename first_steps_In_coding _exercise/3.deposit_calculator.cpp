#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() 
{
    double deposit;
    double termDeposit;
    double annualInteresetRate;
    cin >> deposit;
    cin >> termDeposit;
    cin >> annualInteresetRate;

    double initialSum = deposit * (annualInteresetRate / 100) / 12;
    double totalSum = deposit + termDeposit * initialSum;

    cout << totalSum << endl;

    return 0;
}