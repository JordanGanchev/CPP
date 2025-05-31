#include <iostream>
#include <string>
#include <array>
using namespace std;

const int MaxSize = 99;

void reverseArray(array<string, MaxSize> & rev, int size){
    int iterations = size / 2;

    for (int count = 0; count < iterations; count++){
        string tmp = rev[count];
        rev[count] = rev[size - 1 - count];
        rev[size - 1 - count] = tmp;
    }
}

void printArray(const array<string, MaxSize> & toPrint, int size) {
    for (int counter = 0; counter < size; counter++)
        cout << toPrint[counter] << ' ';
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    array<string, MaxSize> arr;

    for (int count = 0; count < n; count++)
        cin >> arr[count];
    
    reverseArray(arr, n);
    printArray(arr, n);

    return 0;
}