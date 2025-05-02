#include <iostream>
using namespace std;

int main() {
    int men, women, tables;
    cin >> men >> women >> tables;

    int count = 0;

    for (int m = 1; m <= men; m++) {
        for (int w = 1; w <= women; w++) {
            cout << "(" << m << " <-> " << w << ") " << flush;
            count++;
            if (count == tables) {
                return 0;
            }
        }
    }

    return 0;
}
