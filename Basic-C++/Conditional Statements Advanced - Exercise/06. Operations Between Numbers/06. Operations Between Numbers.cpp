
#include <iostream>
using namespace std;

int main()
{
	int N1, N2;
	char sign;
	cin >> N1 >> N2 >> sign;

	double result = 0.0;
	string oddEven;

	if (sign == '+') {
		result = N1 + N2;
	
	}
	else if (sign == '-') {
		result = N1 - N2;
	}
	else if (sign == '*') {
		result = N1 * N2;
	}
	else if (sign == '/') {
		if (N2 == 0) {
			cout << "Cannot divide " << N1 << " by zero" << endl;
			return 0;
		}
		else {
			result = (double)N1 / N2;

			cout.setf(ios::fixed);
			cout.precision(2);

			cout << N1 << ' / ' << N2 << ' = ' << result << endl;
		}
		}
		
	
	if (sign == '+' || sign == '-' || sign == '*') {
		int num = static_cast<int>(result);
		if (num % 2 == 0) {
			oddEven = "even";
		}
		else {
			oddEven = "odd";
		}
		cout << N1 << ' ' << sign << ' ' << N2 << " = " << result << " - " << oddEven << endl;
	}



}
