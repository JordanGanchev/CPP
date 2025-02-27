#include <iostream>
using namespace std;
int main()
{
	string typeFuell;
	double quantity;
	string card;

	cin >> typeFuell >> quantity >> card;

	double gas = 0.93, gasoline = 2.22, diesesl = 2.33;

	if (card == "Yes") {
		gas -= 0.08, diesesl -= 0.12, gasoline -= 0.18;
	}

	double price = 0;

	if (typeFuell == "Gas"){
		if (quantity >= 20 && quantity <= 25) {
			price = (quantity * gas) * 0.92;
		}
		else if (quantity > 25) {
			price = (quantity * gas) * 0.90;
		}
		else
		{
			price = quantity * gas;
		}
	}

	if (typeFuell == "Gasoline") {
		if (quantity >= 20 && quantity <= 25) {
			price = (quantity * gasoline) * 0.92;
		}
		else if (quantity > 25) {
			price = (quantity * gasoline) * 0.90;
		}
		else
		{
			price = quantity * gasoline;
		}
	}

	if (typeFuell == "Diesel") {
		if (quantity >= 20 && quantity <= 25) {
			price = (quantity * diesesl) * 0.92;
		}
		else if (quantity > 25) {
			price = (quantity * diesesl) * 0.90;
		}
		else
		{
			price = quantity * diesesl;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << price << " lv." << endl;

}
