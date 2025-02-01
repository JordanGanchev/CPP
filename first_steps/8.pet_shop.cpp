#include <iostream>  

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() 
{ 
    const double DOGS_FOOD_PRICE = 2.50;
    const double CAT_FOOD_PRICE = 4.00;

    int dogsFoodCount, catsFoodCount;
    cin >> dogsFoodCount >> catsFoodCount;

    double totalDogsFoodPrise = dogsFoodCount * DOGS_FOOD_PRICE;
    double totalCatFoodPrice = catsFoodCount * CAT_FOOD_PRICE;

    double totalPrice = totalCatFoodPrice + totalDogsFoodPrise;

    cout << totalPrice << " lv.";

    return 0;
}