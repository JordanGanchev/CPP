#include <iostream>
#include <string>

using namespace std;

void reverseArray(string rev[], int size){
    int iterations = size / 2;

    for (int count = 0; count < iterations; count++){
        string tmp = rev[count];
        rev[count] = rev[size - 1 - count];
        rev[size - 1 - count] = tmp;
    }
}

void printArray(string toPrint[], int size) {
    for (int counter = 0; counter < size; counter++)
        cout << toPrint[counter] << ' ';
}

int main()
{
    int n;
    cin >> n;

    string arr[n];

    for (int count = 0; count < n; count++)
        cin >> arr[count];
    
    reverseArray(arr, n);
    printArray(arr, n);

    return 0;
}