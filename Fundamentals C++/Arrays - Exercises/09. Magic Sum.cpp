#include <iostream>
using namespace std;

int main() 
{

    int n;
    cin >> n;

    int nums[n];

    for (int count = 0; count < n; count++)
        cin >> nums[count];

    int magicSum;
    cin >> magicSum;

    for (int count = 0; count < n - 1; count++){
        int curentNum = nums[count];
        for (int remaining = count + 1;remaining < n; remaining++){
            if (nums[count] + nums[remaining] == magicSum)
                cout << nums[count] << ' ' << nums[remaining] << endl;
            }
        }
    return 0;
    
}