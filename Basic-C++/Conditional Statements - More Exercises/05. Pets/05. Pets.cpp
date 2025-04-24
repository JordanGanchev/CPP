#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numberDay, foogKilogram;
    double dog, cat, lizard;

    cin >> numberDay >> foogKilogram >> dog >> cat >> lizard;

    double needDogFood = numberDay * dog;
    double needCatFood = numberDay * cat;
    double needLizardFood = (numberDay * lizard) / 1000;

    double totalFood = needDogFood + needCatFood + needLizardFood;

    if (totalFood <= foogKilogram) {
        double diff = foogKilogram - totalFood;
        cout << floor(diff) << " kilos of food left." << endl;
    }
    else
    {
        double diff = totalFood - foogKilogram;
        cout << ceil(diff) << " more kilos of food are needed." << endl;
    }
}
