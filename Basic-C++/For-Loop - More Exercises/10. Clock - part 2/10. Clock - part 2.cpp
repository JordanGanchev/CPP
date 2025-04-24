#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 23; i++) {
        for (int j = 0; j <= 59; j++) {
            for (int k = 0; k <= 59; k++) {
                cout << i << " : " << j << " : " << k << endl;
            }
        }
    }
}

