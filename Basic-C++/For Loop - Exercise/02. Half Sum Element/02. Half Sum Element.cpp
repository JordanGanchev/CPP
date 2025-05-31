#include <iostream>
#include <limits.h>
#include <cmath>

using namespace std;
int main()
{
	int n;
	cin >> n;

	int maxElement = INT_MIN;
	int sumOther = 0;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;;

		if (num > maxElement) {
			maxElement = num;

		}
		sumOther += num;
	}
	int diff = abs(sumOther - 2 * maxElement);
	if (diff == 0) {
		cout << "Yes" << endl << "Sum = " << maxElement << endl;

	}
	else
	{
		cout << "No" << endl << "Diff = " << abs(diff) << endl;
	}


}
