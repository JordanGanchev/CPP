#include <iostream>

using namespace std;


int main()
{
    // perimete i lice na kryg

    const double PI = 3.141592653589793;

    double r;
    cin >> r;

    double perimeter = 2 * PI * r;
    double s = PI * r * r;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << s << endl;
    cout << perimeter << endl;
}
