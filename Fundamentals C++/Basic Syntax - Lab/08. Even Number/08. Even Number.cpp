#include <iostream>
using namespace std;
int main()
{
    do {

        int n;
        cin >> n;

        if (n % 2) {
            cout << "Please write an even number." << endl;
        }
        else
        {
            if (n < 0)
                n *= -1;
                cout << "The number is: " << n << endl;
                break;
        }

    } while (true);

    return 0;
}
