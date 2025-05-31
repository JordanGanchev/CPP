#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int m = 1; m <= 9; m++) {
                for (int l = 1; l <= 9; l++) {
                    int firstSum = i + j;
                    int secondSum = m + l;
                    if (firstSum == secondSum && n % firstSum == 0) {
                        cout << i << j << m << l << " ";
                    }
                }
            }
        }
    }
}
