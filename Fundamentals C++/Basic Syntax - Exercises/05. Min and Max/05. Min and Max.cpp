#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int number;
    cin >> number;

    double num;
    double minNum = numeric_limits<double>::max();
    double maxNum = numeric_limits<double>::lowest();

    for (int i = 1; i <= number; i++) {
        cin >> num;

        if (num < minNum) {
            minNum = num;
        }
        if (num > maxNum) {
            maxNum = num;
        }
    }

    cout << minNum << ' ' << maxNum << endl;
}
