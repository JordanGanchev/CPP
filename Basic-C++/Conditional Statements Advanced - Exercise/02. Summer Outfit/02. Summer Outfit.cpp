
#include <iostream>
using namespace std;

int main()
{
    int degrees;
    cin >> degrees;
    
    string timeOfDay, shoes, outfit;
    cin >> timeOfDay;

    if (degrees >= 10 && degrees <= 18) {
        if (timeOfDay == "Morning") {
            shoes = "Sneakers";
            outfit = "Sweatshirt";
        }
        else if (timeOfDay == "Afternoon") {
            shoes = "Moccasins";
            outfit = "Shirt";
        }
        else if (timeOfDay == "Evening") {
            shoes = "Moccasins";
            outfit = "Shirt";
        }
    }
    if (degrees > 18 && degrees <= 24) {
        if (timeOfDay == "Morning") {
            shoes = "Moccasins";
            outfit = "Shirt";
        }
        else if (timeOfDay == "Afternoon") {
            shoes = "Sandals";
            outfit = "T-Shirt";
        }
        else if (timeOfDay == "Evening") {
            shoes = "Moccasins";
            outfit = "Shirt";
        }
    }
    if (degrees >= 25) {
        if (timeOfDay == "Morning") {
            shoes = "Sandals";
            outfit = "T-Shirt";
        }
        else if (timeOfDay == "Afternoon") {
            shoes = "Barefoot";
            outfit = "Swim Suit";
        }
        else if (timeOfDay == "Evening") {
            shoes = "Moccasins";
            outfit = "Shirt";
        }
    }

    cout << "It's " << degrees << " degrees, get your "
        << outfit << " and " << shoes << ".";
}
