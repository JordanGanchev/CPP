#include <iostream>
using namespace std;

int main()
{
	double degree;
	cin >> degree;

	if (degree >= 26 && degree <= 35) {
		cout << "Hot" << endl;
	}
	else if (degree >= 20.1 && degree <= 25.9) {
		cout << "Warm" << endl;
	}
	else if (degree >= 15.00 && degree <= 20.00) {
		cout << "Mild" << endl;
	}
	else if (degree >= 12.00 && degree <= 14.9) {
		cout << "Cool" << endl;
	}
	else if (degree >= 5.00 && degree <= 11.9) {
		cout << "Cold" << endl;
	}
	else {
		cout << "unknown" << endl;
	}
}

