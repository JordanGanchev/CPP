
#include <iostream>
using namespace std;
int main()
{
    int moveGame, move;
    cin >> moveGame;

    double count0 = 0, count10 = 0, count20 = 0, count30 = 0, count40 = 0, countNegative = 0;
    double result = 0;

    for (int i = 1; i <= moveGame; i++) {
        cin >> move;

        if (move >= 0 && move <= 9) {
            result += move * 0.2;
            count0++;
        }
        else if (move >= 10 && move <= 19) {
            result += move * 0.3;
            count10++;
        }
        else if (move >= 20 && move <= 29) {
            result += move * 0.4;
            count20++;
        }
        else if (move >= 30 && move <= 39) {
            result += 50;
            count30++;
        }
        else if (move >= 40 && move <= 50) {
            result += 100;
            count40++;
        }
        else
        {
            result /= 2;
            countNegative++;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << result << endl;
    cout << "From 0 to 9: " << (100.0 * count0) / moveGame << "%" << endl;
    cout << "From 10 to 19: " << (100.0 * count10) / moveGame << "%" << endl;
    cout << "From 20 to 29: " << (100.0 * count20) / moveGame << "%" << endl;
    cout << "From 30 to 39: " << (100.0 * count30) / moveGame << "%" << endl;
    cout << "From 40 to 50: " << (100.0 * count40) / moveGame << "%" << endl;
    cout << "Invalid numbers: " << (100.0 * countNegative) / moveGame << "%" << endl;
}
