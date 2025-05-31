#include <iostream>

using namespace std;

int main() {
    char lastSector;
    int initialRows, seatsInOddRow;

    cin >> lastSector >> initialRows >> seatsInOddRow;
    int totalSeats = 0;

    for (char sector = 'A'; sector <= lastSector; sector++) {
        int rowsInSector = initialRows + (sector - 'A');
        for (int row = 1; row <= rowsInSector; row++) {
            int seatsInRow = (row % 2 == 0) ? seatsInOddRow + 2 : seatsInOddRow;
            for (char seat = 'a'; seat < 'a' + seatsInRow; seat++) {
                cout << sector << row << seat << endl;
                totalSeats++;
            }
        }
    }

    cout << totalSeats << endl;

    return 0;
}
