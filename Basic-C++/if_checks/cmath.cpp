#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double number = 5.9999992345;

    cout << floor(number) << endl;
    cout << ceil(number) << endl;

    cout.setf(ios::fixed);
    cout.precision(10);

    cout << number << endl;
    cout << abs(number) << endl;
}