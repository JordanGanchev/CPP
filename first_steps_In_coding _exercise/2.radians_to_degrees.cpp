#include <iostream>
#include <math.h>

using std::cout;
using std::endl;
using std::cin;
using std::ios;

int main() 
{
    double radians;
    cin >> radians;

    double degrees = radians * 180 / 3.14;

    cout << round(degrees) << endl;


    return 0;
}