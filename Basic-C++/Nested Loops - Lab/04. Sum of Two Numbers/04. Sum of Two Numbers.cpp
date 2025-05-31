#include <iostream>
using namespace std;
int main()
{
    int startNumber, endNumber, searchNumber, result;
    cin >> startNumber >> endNumber >> searchNumber;

    int combination = 0;

    for (int firstNum = startNumber; firstNum <= endNumber; firstNum++) {
        for (int secondNum = startNumber; secondNum <= endNumber; secondNum++) {
            combination++;
            result = firstNum + secondNum;

            if (result == searchNumber) {
                cout << "Combination N:" << combination <<
                    " (" << firstNum << " + " << secondNum << " = " << searchNumber << ")"
                    << endl;
                return 0;
            }
          
        }
    }

    cout << combination << " combinations - neither equals " << searchNumber << endl;
}

