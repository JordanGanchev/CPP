#include <iostream>

using namespace std;

void readArray(int arr[], int size){
    for(int count = 0; count < size; count++)
        cin >> arr[count];

}

bool areIdentical(int arr1[], int arr2[], int n, int & retValue){
    int sum = 0;
    for(int count = 0; count < n; count++){
        if (arr1[count] != arr2[count]){
            retValue = count;
            return false;
        }
        sum += arr1[count];
    }

    retValue = sum;
    return true;
}

int main()
{
    int n;
    cin >> n;

    int arr1[n], arr2[n];

    readArray(arr1, n);
    readArray(arr2, n);

    int retValue;
    if(areIdentical(arr1, arr2, n, retValue)){
        cout << "Arrays are identical. Sum: " << retValue << endl;
    }
    else
    {
        cout << "Arrays are not identical. Found difference at " << retValue << " index." << endl;
    }

    return 0;
}