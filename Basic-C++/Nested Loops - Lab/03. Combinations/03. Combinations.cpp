#include <iostream>
using namespace std;
int main()
{
    int maxNumber;
    cin >> maxNumber;

    int counterMatches = 0;

    for (int x1 = 0; x1 <= maxNumber; x1++) {
        for (int x2 = 0; x2 <= maxNumber; x2++) {
            for (int x3 = 0; x3 <= maxNumber; x3++) {
                if (x1 + x2 + x3 == maxNumber) {
                    counterMatches++;
                }
            }
        }
    }
    cout << counterMatches;
}

