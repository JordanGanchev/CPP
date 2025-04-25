#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double discriminant = (b * b - 4 * a * c);

    if (discriminant < 0) {
        cout << "no roots" << endl;
    }
    else
    {
        cout << (-b + sqrt(discriminant)) / (2 * a) << ' ';
        if (discriminant > 0)
            cout << (-b - sqrt(discriminant)) / (2 * a);
        cout << endl;
    }

    return 0;
}