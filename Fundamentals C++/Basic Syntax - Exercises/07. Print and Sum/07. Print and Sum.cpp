#include <iostream>
using namespace std;
int main()
{
    /*cout << "sixeof(int) = " << sizeof(int) << endl;
    cout << "sixeof(long) = " << sizeof(long) << endl;
    cout << "sixeof(long long) = " << sizeof(long long) << endl;

    return 0;*/

    int start, end;
    cin >> start >> end;

    long int sum = 0;

    for (int curr = start; curr <= end; curr++) {
        cout << curr << ' ' << flush;
        sum += curr;
    }
    cout << endl << "Sum: " << sum << endl;

    return 0;
}

