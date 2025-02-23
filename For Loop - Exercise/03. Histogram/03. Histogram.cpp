#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        if (num < 200) {
            num1++;
        }
        else if (num < 400) {
            num2++;
        }
        else if (num < 600) {
            num3++;
        }
        else if (num < 800) {
            num4++;
        }
        else
        {
            num5++;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << 100.0 * num1 / n << "%" << endl;
    cout << 100.0 * num2 / n << "%" << endl;
    cout << 100.0 * num3 / n << "%" << endl;
    cout << 100.0 * num4 / n << "%" << endl;
    cout << 100.0 * num5 / n << "%" << endl;
    

}
