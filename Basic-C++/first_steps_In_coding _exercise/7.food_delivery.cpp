#include <iostream>
using namespace std;

int main() 
{
    int chicken, fish, vegetarian;
    cin >> chicken >> fish >> vegetarian;

    double cost = chicken * 10.35 + fish * 12.4 + vegetarian * 8.15;
    double dessert = 0.2 * cost;

    double totalCost = cost + dessert + 2.5;
    cout << totalCost << endl;

    return 0;
}
