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
    cin.ignore(); // Изчиства '\n' от буфера, за да работи getline()

    string typeRoom;
    string rating;

    getline(cin, typeRoom);
    getline(cin, rating);

    double price = 0.0;
    int nights = dayStay - 1; // Броят нощувки е с 1 по-малко от дните

    if (typeRoom == "apartment") {
        price = apartment * nights; // Изчисляване на базовата цена

        if (dayStay < 10) {
            price *= 0.70; // 30% отстъпка
        }
        else if (dayStay >= 10 && dayStay <= 15) {
            price *= 0.65; // 35% отстъпка
        }
        else if (dayStay > 15) {
            price *= 0.50; // 50% отстъпка
        }
    }
    else if (typeRoom == "president apartment") {
        price = presidentApartment * nights; // Изчисляване на базовата цена

        if (dayStay < 10) {
            price *= 0.90; // 10% отстъпка
        }
        else if (dayStay >= 10 && dayStay <= 15) {
            price *= 0.85; // 15% отстъпка
        }
        else if (dayStay > 15) {
            price *= 0.80; // 20% отстъпка
        }
    }
    else if (typeRoom == "room for one person") {
        price = roomForOnePerson * nights; // Тази стая няма отстъпки
    }

    // Прилага се рейтинг бонус или намаление
    if (rating == "positive") {
        price *= 1.25; // +25%
    }
    else if (rating == "negative") {
        price *= 0.90; // -10%
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << price << endl;

    return 0;
}
