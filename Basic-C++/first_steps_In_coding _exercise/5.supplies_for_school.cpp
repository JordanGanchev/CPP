#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() 
{
    const double CHEMICALS_PACK = 5.80;
    const double MARCER_PACK = 7.20;
    const double DETERGENT = 1.20;

    int numberChemicals;
    int numberMarcer;
    int literDetergent;
    int percentReduction;
    cin >> numberChemicals;
    cin >> numberMarcer;
    cin >> literDetergent;
    cin >> percentReduction;

    double priceChemicals = numberChemicals * CHEMICALS_PACK;
    double priceMarcre = numberMarcer * MARCER_PACK;
    double priceDetergent = priceDetergent * DETERGENT;

    double totalPrice = priceChemicals + priceMarcre + priceDetergent;
    double discount = 0.01 * percentReduction * totalPrice;
    double result = totalPrice - discount;

    cout << result << endl;


    return 0;
}
