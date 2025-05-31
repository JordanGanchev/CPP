#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;

    int remN = n;

    long strongSum = 0;

    while (remN) {
        int currDigit = remN % 10;
        remN /= 10;

        long factoriel = 1;
        for (int curr = 2; curr <= currDigit; curr++)
            factoriel = factoriel * curr;

        strongSum += factoriel;
    }

    cout << (n == strongSum ? "yes" : "no") << endl;

    return 0;

 }

