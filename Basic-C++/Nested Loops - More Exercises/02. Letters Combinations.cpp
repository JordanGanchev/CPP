#include <iostream>
using namespace std;

int main() {
    char start, end, num;
    cin >> start >> end >> num;

    int count = 0;

    for (char i = start; i <= end; i++) {
        for (char j = start; j <= end; j++) {
            for (char k = start; k <= end; k++) {
                if (i == num || j == num || k == num) {
                    continue;
                }
                cout << i << j << k << " ";
                count++;
            }
        }
    }

    cout << count << endl;
}

