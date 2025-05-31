#include <iostream>

using namespace std;

int main()
{
    double x, y, h;
    cin >> x >> y >> h;

    double ss = x * y;
    double pp = 1.5 * 1.5;
    double dso = (2 * ss) - (2 * pp);
    double zs = x * x;
    double in = 1.2 * 2;
    double opzch = (zs * 2) - in;
    double op = dso + opzch;
    double ozb = op / 3.4;

    double dpp = (x * y) * 2;
    double dt = (x * h / 2) * 2;
    double opp = dpp + dt;
    double opchb = opp / 4.3;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << ozb << endl;
    cout << opchb << endl;
}