#include <iostream>
using namespace std;
int main()
{
	float grade;
	cin >> grade;

	if (grade < 3.00) {
		cout << "Failed!" << endl;
	}
	else
	{
		cout << "Passed!" << endl;
	}
}
