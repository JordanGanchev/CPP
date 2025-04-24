#include <iostream>
using namespace std;
int main()
{
    const int FIRST_NUMBER = 1;

    int maxNum;
    cin >> maxNum;

    int currentNum = FIRST_NUMBER;

    while (currentNum <= maxNum) {
        cout << currentNum << endl;
        currentNum = (currentNum * 2) + 1;
    }
}
