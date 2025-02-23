#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

	for (int i = 0; i < n; i++) {
		int climbers;
		cin >> climbers;

		if (climbers <= 5) {
			c1 += climbers;
		}
		else if (climbers <= 12) {
			c2 += climbers;
		}
		else if (climbers <= 25) {
			c3 += climbers;
		}
		else if (climbers <= 40) {
			c4 += climbers;
		}
		else
		{
			c5 += climbers;
		}
	}

	int total = c1 + c2 + c3 + c4 + c5;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << 100.0 * c1 / total << "%" << endl;
	cout << 100.0 * c2 / total << "%" << endl;
	cout << 100.0 * c3 / total << "%" << endl;
	cout << 100.0 * c4 / total << "%" << endl;
	cout << 100.0 * c5 / total << "%" << endl;
}
