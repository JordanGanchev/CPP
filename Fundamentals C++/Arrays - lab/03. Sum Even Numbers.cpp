#include <iostream>

using namespace std;

int main()
{
    const int MaxSize = 99;
    int arr[MaxSize];
    
    int n;
    cin >> n;

    for (int count = 0; count < n; count++){
        cin >> arr[count];
    }
    
    long sum = 0;
    for(int count = 0; count < n; count++)
        if(arr[count] % 2 == 0)
        {
            sum += arr[count];
        }
    
    cout << sum << endl;

    return 0;
}