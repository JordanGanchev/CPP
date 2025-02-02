#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::ios;

int main() 
{
    double usd;
    cin >> usd;
    
    double bgn = usd * 1.79549;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << bgn << endl;

    return 0;
}