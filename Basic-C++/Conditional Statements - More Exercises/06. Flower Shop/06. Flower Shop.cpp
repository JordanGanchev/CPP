
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int magnolia, hyacinth, rose, cactus;
    double priceGift;

    cin >> magnolia >> hyacinth >> rose >> cactus >> priceGift;

    double sumSum = magnolia * 3.25 + hyacinth * 4 + rose * 3.5 + cactus * 8;

    double profit = sumSum * 0.95;
    double diff = profit - priceGift;

    if (priceGift > profit) {
        cout << "She will have to borrow " << ceil(abs(diff)) << " leva.";
    }
    else
    {
        cout << "She is left with " << floor(diff) << " leva.";
    }

}
