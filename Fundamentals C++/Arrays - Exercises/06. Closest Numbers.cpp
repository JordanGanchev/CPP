#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() 
{

    int n;
    cin >> n;

    int nums[n];

    for (int count = 0; count < n; count++)
        cin >> nums[count];

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    
    int min_diff = INT_MAX;

    for(int first = 0; first < n - 1; first++) {
        for (int second = first + 1; second < n; second++){
            int difference = abs(nums[first] - nums[second]);
            if (difference < min_diff)
                min_diff = difference;
        }
    }

    cout << min_diff << endl;

    return 0;

}