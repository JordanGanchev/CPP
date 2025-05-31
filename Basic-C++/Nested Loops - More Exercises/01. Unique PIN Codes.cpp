#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 1; i <= a; i++) {
        if (i % 2 != 0) continue;
        for (int k = 1; k <= b; k++) {
            if (k != 2 && k != 3 && k != 5 && k != 7) continue;
            for (int j = 1; j <= c; j++) {
                if (j % 2 != 0) continue;
                cout << i << " " << k << " " << j << endl;
            }
        } 
    }
}
