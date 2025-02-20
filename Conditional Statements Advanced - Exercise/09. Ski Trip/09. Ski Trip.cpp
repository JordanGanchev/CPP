#include <iostream>
#include <string>

using namespace std;

int main()
{
    const double roomForOnePerson = 18.00;
    const double apartment = 25.00;
    const double presidentApartment = 35.00;

    int dayStay;
    cin >> dayStay;
    string typeRoom;
    string rating;

    getline(cin, typeRoom);
    getline(cin, rating);
    

    double price = 0.0;

    if (typeRoom == "apartment") {
        if (dayStay < 10) {
            price = apartment * 0.70;
        }
        else if (dayStay >= 10 && dayStay <= 15) {
            price = apartment * 0.65;
        }
        else if (dayStay > 15) {
            price = apartment * 0.5;
        }
    }
    else if (typeRoom == "president apartment") {
        if (dayStay < 10) {
            price = presidentApartment * 0.90;
        }
        else if (dayStay >= 10 && dayStay <= 15) {
            price = presidentApartment * 0.85;
        }
        else if (dayStay > 15) {
            price = presidentApartment * 0.80;
        }
    }
    else if (typeRoom == "room for one person") {
        price = roomForOnePerson;
    }
    if (rating == "positive") {
        price *= 1.25;
    }
    else if (rating == "negative") {
        price *= 0.9;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << price << endl;

}
