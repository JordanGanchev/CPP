#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const int NUMBER_TO_BE_POWERED = 2;

	int numberOfPower;
	cin >> numberOfPower;

	for (int power = 0; power <= numberOfPower; power += 2) {
		cout << pow(NUMBER_TO_BE_POWERED, power) << endl;
	}
}