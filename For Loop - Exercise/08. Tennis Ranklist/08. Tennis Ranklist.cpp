#include <iostream>
using namespace std;
int main()
{
    int tournaments, initialPoints;
    cin >> tournaments >> initialPoints;

    int seasonPoints = 0, winsCount = 0;
    for (int i = 0; i < tournaments; i++) {
        string position;
        cin >> position;

        if (position == "W") {
            seasonPoints += 2000;
            winsCount++;
        }
        else if (position == "F") {
            seasonPoints += 1200;
        }
        else if (position == "SF") {
            seasonPoints += 720;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Final points: " << initialPoints + seasonPoints << endl;
    cout << "Average points: " << seasonPoints / tournaments << endl;
    cout << 100.0 * winsCount / tournaments << "%" << endl;

}
