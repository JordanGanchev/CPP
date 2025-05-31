#include <iostream>
using namespace std;

int main() 
{

    int n;
    cin >> n;

    int nums[n];

    for (int count = 0; count < n; count++)
        cin >> nums[count];

    int cartesian[n*n];

    for (int base = 0; base < n; base++)
        for(int second = 0; second < n; second++){
            int index = base * n + second;
            cartesian[index] = nums[base] * nums[second];
        }
    
    for(int count = 0; count < n*n; count++){
        cout << cartesian[count] << ' ' << flush;
    }
    cout << endl;
            
}