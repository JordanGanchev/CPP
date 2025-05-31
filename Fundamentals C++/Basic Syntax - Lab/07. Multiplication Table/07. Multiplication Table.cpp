#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int curr = 1; curr <= 10; curr++) {
        cout << n << " X " << curr << " = " << n * curr << endl;
    }
}

