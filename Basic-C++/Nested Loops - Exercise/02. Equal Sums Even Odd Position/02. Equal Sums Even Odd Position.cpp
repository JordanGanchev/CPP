#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {

        int num = i, oddSum = 0, evenSum = 0;
        bool isEvenPosition = true;

        while (num != 0) {
            int lastDigit = num % 10;
            if (isEvenPosition) {
                evenSum += lastDigit;
            }
            else
            {
                oddSum += lastDigit;
            }

            num /= 10;
            isEvenPosition = !isEvenPosition;
        }

        if (oddSum == evenSum) {
            cout << i << ' ';
        }
    }
    cout << endl;
}
