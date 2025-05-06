#include <iostream>

using namespace std;

int main() 
{

    int n;
    cin >> n;

    int array[n];
    for (int count = 0; count < n; count++)
        cin >> array[count];
    
    long oddSum = 0;
    long evenSum = 0;

    for (int count = 0; count < n; count++)
        if(array[count] % 2)
            oddSum += array[count];
        else
            evenSum += array[count];
    cout << evenSum - oddSum << endl;

    return 0;
}