#include <iostream>
using namespace std;

int main() 
{

    int n;
    cin >> n;

    int nums[n];

    for (int count = 0; count < n; count++)
        cin >> nums[count];

    int rotations;
    cin >> rotations;

    int real_rotations = rotations % n;

    for (int c = real_rotations; c < n; c++) {
        cout << nums[c] << ' ' << flush;
    }

    for (int c = 0; c < real_rotations; c++) {
        cout << nums[c] << ' ' << flush;
    }
    cout << endl;

    return 0;
}