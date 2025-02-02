#include <iostream>
using namespace std;

int main() 
{
    int tax;
    cin >> tax;

    double shoes = 0.6 * tax;
    double kit = 0.8 * shoes;
    double ball = 0.25 * kit;
    double accessories = 0.2 * ball;

    double totalCost = tax + shoes + kit + ball + accessories;
    cout << totalCost <<endl;

    return 0;
}
