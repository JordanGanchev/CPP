#include <iostream>
using namespace std;

int main()
{
    int maxSum;
    cin >> maxSum;

    int num = 0;
    int currentSum = 0;

    while (currentSum < maxSum) {
        cin >> num;
        currentSum += num;

    }
    cout << currentSum << endl;

    return 0;
}
