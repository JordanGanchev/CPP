#include <iostream>

using namespace std;

int main()
{
    double b1, b2, h;
    cin >> b1 >> b2 >> h;
   
    double result = (b1 + b2) * h / 2;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << result << endl;
}