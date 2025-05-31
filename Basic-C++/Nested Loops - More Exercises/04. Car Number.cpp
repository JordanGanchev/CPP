#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        for (int j = start; j <= end; j++) {
            for (int m = start; m <= end; m++) {
                for (int l = start; l <= end; l++) {
                    if ((i % 2 == 0 && l % 2 != 0) || (i % 2 != 0 && l % 2 == 0))
                        if (i > l)
                            if ((j + m) % 2 == 0)
                                cout << i << j << m << l << ' ';
                }
            }
        }
    }
}