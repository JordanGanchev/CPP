#include <iostream>

using namespace std;

int main()
{
    const int MaxSize = 99;

    int array[MaxSize] = {};

    int n;
    cin >> n;

    for (int count = 0; count < n; count++)
        cin >> array[count];

    for (int count = n -1; count >= 0; count--)
        cout << array[count] << ' '<< flush;
    
    cout << endl;

    return 0;
}