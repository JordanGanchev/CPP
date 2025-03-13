#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int prevSum = 0, maxDiff = 0;
    bool firstPair = true;

    for (int i = 0; i < n; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        int currSum = num1 + num2;

        if (!firstPair) {
            int diff = abs(currSum - prevSum);
            if (diff > maxDiff) {
                maxDiff = diff;
            }
        }

        prevSum = currSum;
        firstPair = false;
    }

    if (maxDiff == 0) {
        cout << "Yes, value=" << prevSum << endl;
    }
    else {
        cout << "No, maxdiff=" << maxDiff << endl;
    }

    return 0;
}
