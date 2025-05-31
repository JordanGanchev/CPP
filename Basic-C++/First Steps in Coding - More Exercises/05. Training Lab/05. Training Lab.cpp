#include <iostream>

using namespace std;

int main()
{
    double w, h;
    cin >> w >> h;

    int h1 = ((h * 100) - 100) / 70;
    int w1 = (w * 100) / 120;
    
    int result = (h1 * w1) - 3;

    cout << result << endl;
}