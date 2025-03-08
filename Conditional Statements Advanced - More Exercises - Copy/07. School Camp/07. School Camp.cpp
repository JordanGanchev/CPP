#include <iostream>
using namespace std;
int main()
{
    string season, kaindGrup;
    int numberStudent, numberNigth;

    cin >> season >> kaindGrup >> numberStudent >> numberNigth;

    double price = 0.00;
    double percent = 0.00;
    string sport;
    double totalSum = 0.00;

    if (season == "Winter") {
        if (kaindGrup == "girls" || kaindGrup == "boys") {
            price = 9.6;
        }
        else
        {
            price = 10;
        }

    }
    else if (season == "Spring") {
        if (kaindGrup == "girls" || kaindGrup == "boys") {
            price = 7.2;
        }
        else
        {
            price = 9.5;
        }
    }
    else if (season == "Summer") {
        if (kaindGrup == "girls" || kaindGrup == "boys") {
            price = 15;
        }
        else
        {
            price = 20;
        }
    }

    if (numberStudent >= 10 && numberStudent < 20) {
        percent = 0.05;
    }
    else if (numberStudent >= 20 && numberStudent < 50) {
        percent = 0.15;
    }
    else if (numberStudent >= 50) {
        percent = 0.5;
    }

    if (season == "Winter" && kaindGrup == "girls") {
        sport = "Gymnastics";
    }
    else if (season == "Winter" && kaindGrup == "boys") {
        sport = "Judo";
    }
    else if (season == "Winter" && kaindGrup == "mixed") {
        sport = "Ski";
    }
    else if (season == "Spring" && kaindGrup == "girls") {
        sport = "Athletics";
    }
    else if (season == "Spring" && kaindGrup == "boys") {
        sport = "Tennis";
    }
    else if (season == "Spring" && kaindGrup == "mixed") {
        sport = "Cycling";
    }
    else if (season == "Summer" && kaindGrup == "girls") {
        sport = "Volleyball";
    }
    else if (season == "Summer" && kaindGrup == "boys") {
        sport = "Football";
    }
    else if (season == "Summer" && kaindGrup == "mixed") {
        sport = "Swimming";
    }

    totalSum = numberStudent * numberNigth * price;
    totalSum = totalSum - totalSum * percent;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << sport << ' ' << totalSum << " lv." << endl;
}