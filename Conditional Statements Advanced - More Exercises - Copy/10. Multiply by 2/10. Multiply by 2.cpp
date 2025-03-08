#include <iostream>
using namespace std;
int main()
{
	double number;
	cin >> number;

	while (number >= 0) {
		number *= 2;
		cout.setf(ios::fixed);
		cout.precision(2);

		cout << "Result: " << number << endl;

		cin >> number;
	
	}
	cout << "Negative number!" << endl;
}
