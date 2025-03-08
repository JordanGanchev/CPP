
#include <iostream>
using namespace std;
int main()
{
	int numberChrysanthemums, numberRoses, numberTulips;
	string season;
	char day;

	cin >> numberChrysanthemums >> numberRoses >> numberTulips >> season >> day;

	double price = 0;
	int flowvers = numberChrysanthemums + numberRoses + numberTulips;

	if (season == "Spring" || season == "Summer") {
		price = (numberChrysanthemums * 2.00) +
			(numberRoses * 4.10) +
			(numberTulips * 2.50);
	}
	else if (season == "Autumn" || season == "Winter") {
		price = (numberChrysanthemums * 3.75) +
			(numberRoses * 4.50) +
			(numberTulips * 4.15);
	}
	if (day == 'Y') {
		price *= 1.15;
	}
	if (numberTulips > 7) {
		price *= 0.95;
	}
	else if (numberRoses >= 10) {
		price *= 90;
	}
	else if (flowvers > 20) {
		price *= 0.8;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << price + 2 << endl;
}

