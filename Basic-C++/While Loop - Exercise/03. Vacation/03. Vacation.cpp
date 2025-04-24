#include <iostream>
using namespace std;

int main()
{
	double targetAmount, totalMoney;
	cin >> targetAmount >> totalMoney;

	string action;
	double actionAmount;
	int days = 0, count = 0;
	bool success = true;

	while (totalMoney < targetAmount) {
		cin >> action >> actionAmount;

		days++;

		if (action == "save") {
			totalMoney += actionAmount;
			count = 0;
		}
		else if (action == "spend") {
			if (++count == 5) {
				success = false;
				break;
			}

			if (actionAmount > totalMoney) {
				totalMoney = 0;
			}
			else
			{
				totalMoney -= actionAmount;
			}
		}
	}

	if (success) {
		cout << "You saved the money for " << days << " days." << endl;
	}
	else
	{
		cout << "You can't save the money." << endl;
		cout << days << endl;
	}
}
