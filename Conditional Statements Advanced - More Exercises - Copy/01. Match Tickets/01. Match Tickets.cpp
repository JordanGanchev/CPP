#include <iostream>
using namespace std;

int main()
{
    double const IP = 499.99;
    double const normal = 249.99;

    double budget;
    string categoty;
    int numberPeople;

    cin >> budget >> categoty >> numberPeople;

    double sumTickets = 0.00;

    if (numberPeople >= 1 && numberPeople <= 4) {
        budget *= 0.25;
    }

    else if (numberPeople >= 5 && numberPeople <= 9) {
        budget *= 0.4;
    }
    else if (numberPeople >= 10 && numberPeople <= 24) {
        budget *= 0.5;
    }
    else if (numberPeople >= 25 && numberPeople <= 49) {
        budget *= 0.6;
    }
    else if (numberPeople >= 50) {
        budget *= 0.75;
    }

    if (categoty == "VIP") {
        sumTickets = numberPeople * IP;
    }
    else
    {
        sumTickets = numberPeople * normal;
    }

    double finalSum = budget - sumTickets;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget > sumTickets) {
      
        cout << "Yes! You have " << finalSum << " leva left.";
    }
    else
    {

        cout << "Not enough money! You need " << -1 * finalSum  << " leva.";
    }
}


//#include <iostream>
//#include <iomanip> // за да форматираме изхода до 2 знака след десетичната точка
//using namespace std;
//
//int main() {
//    const double VIP_PRICE = 499.99;
//    const double NORMAL_PRICE = 249.99;
//
//    double budget;
//    string category;
//    int numberPeople;
//
//    cin >> budget >> category >> numberPeople;
//
//    double transportCost = 0.0;
//
//    // Определяне на процента за транспортните разходи
//    if (numberPeople >= 50) {
//        transportCost = budget * 0.25;
//    }
//    else if (numberPeople >= 25) {
//        transportCost = budget * 0.40;
//    }
//    else if (numberPeople >= 10) {
//        transportCost = budget * 0.50;
//    }
//    else if (numberPeople >= 5) {
//        transportCost = budget * 0.60;
//    }
//    else {
//        transportCost = budget * 0.75;
//    }
//
//    double remainingBudget = budget - transportCost;
//    double totalTicketCost = (category == "VIP") ? numberPeople * VIP_PRICE : numberPeople * NORMAL_PRICE;
//
//    if (remainingBudget >= totalTicketCost) {
//        cout << fixed << setprecision(2);
//        cout << "Yes! You have " << (remainingBudget - totalTicketCost) << " leva left." << endl;
//    }
//    else {
//        cout << fixed << setprecision(2);
//        cout << "Not enough money! You need " << (totalTicketCost - remainingBudget) << " leva." << endl;
//    }
//
//    return 0;
//}

