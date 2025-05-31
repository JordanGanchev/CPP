#include <iostream>
using namespace std;

int main() 
{

    int n;
    cin >> n;

    int nums[n];

    for (int count = 0; count < n; count++)
        cin >> nums[count];

    for (int count = 0; count < n; count++){
        int curentNum = nums[count];
        bool is_top = true;
        for (int remaining = count + 1;remaining < n; remaining++){
            if(curentNum <= nums[remaining]){
                is_top = false;
                break;
            }
        }
        if (is_top) {
            cout << curentNum << ' ';
        }
        
    }
    cout << endl;
    return 0;
    
}