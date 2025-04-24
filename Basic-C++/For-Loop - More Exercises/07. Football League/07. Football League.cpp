
#include <iostream>
using namespace std;
int main()
{
    int capacity, numberFens;
    string sector;
    cin >> capacity;
    cin >> numberFens;
    int aFens = 0, bFens = 0, vFens = 0, gFens = 0, ever = 0;

    for (int i = 1; i <= numberFens; i++) {
        cin >> sector;

        if (sector == "A") aFens++;
        else if (sector == "B") bFens++;
        else if (sector == "V") vFens++;
        else if (sector == "G") gFens++;
        ever++;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << (aFens * 100.0) / numberFens << "%" << endl;
    cout << (bFens * 100.0) / numberFens << "%" << endl;
    cout << (vFens * 100.0) / numberFens << "%" << endl;
    cout << (gFens * 100.0) / numberFens << "%" << endl;
    cout << (ever * 100.0) / capacity << "%" << endl;
}