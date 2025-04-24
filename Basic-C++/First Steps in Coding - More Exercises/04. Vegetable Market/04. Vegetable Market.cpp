
#include <iostream>

using namespace std;

int main()
{
    double priceVegetable;
    double priceFruit;
    int weightVegetable;
    int weightFruit;

    cin >> priceVegetable >> priceFruit >> weightVegetable >> weightFruit;

    double result = (priceVegetable * weightVegetable) + (priceFruit * weightFruit);
 
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << result / 1.94 << endl;
}

