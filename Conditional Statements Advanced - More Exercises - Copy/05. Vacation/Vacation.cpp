#include <iostream>
using namespace std;
int main()
{
	double budget;
	string season;

	cin >> budget >> season;

	double alaska = budget, moroko = budget;
	string place, seasonChar;
	bool seasonCheck = false;

	if (budget <= 1000) {
		if (season == "Summer") {
			alaska *= 0.65;
			seasonCheck = true;
		}
		else
		{
			moroko *= 0.45;
		}
		place = "Camp";
	
	}
	else if (budget > 1000 && budget <= 3000) {
		if (season == "Summer") {
			alaska *= 0.80;
			seasonCheck = true;
		}
		else
		{
			moroko *= 0.60;
		}
		place = "Hut";

	}
	else if (budget > 3000) {
		if (season == "Summer") {
			alaska *= 0.90;
			seasonCheck = true;
		}
		else
		{
			moroko *= 0.90;
		}
		place = "Hotel";
	}
	double value = 0.00;

	if (seasonCheck) {
		seasonChar = "Alaska";
		value = alaska;
	}
	else
	{
		value = moroko;
		seasonChar = "Morocco";
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << seasonChar << " - " << place << " - " << value << endl;
}