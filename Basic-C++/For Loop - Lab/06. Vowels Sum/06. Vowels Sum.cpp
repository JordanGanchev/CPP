#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	getline(cin, text);

	int voweSum = 0;

	for (char letter : text) {
		if (letter == 'a') {
			voweSum += 1;
		}
		else if (letter == 'e') {
			voweSum += 2;
		}
		else if (letter == 'i') {
			voweSum += 3;
		}
		else if (letter == 'o') {
			voweSum += 4;
		}
		else if (letter == 'u') {
			voweSum += 5;
		}
	}
	cout << voweSum << endl;
}
