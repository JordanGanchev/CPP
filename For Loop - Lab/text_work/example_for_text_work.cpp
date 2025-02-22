
#include <iostream>

using namespace std;

int main()
{
	string name = "malin";

	char firstLetter = name[0];

	for (int i = 0; i < name.length(); i++) {
		cout << name[i] << endl;
	}

	for (char letter : name) {
		cout << letter << endl;
	}
}