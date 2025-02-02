#include <iostream>
using namespace std;

int main() 
{
    int naylon, paint, thinner, workHours;
    cin >> naylon >> paint >> thinner >> workHours;

    double materialsCost = (naylon + 2) * 1.5 + 1.1 * paint * 14.5 + thinner * 5 + 0.4;

    double laborCost = 0.3 * materialsCost * workHours;
    double totalCost = materialsCost + laborCost;
    cout << totalCost <<endl;

    return 0;
}
