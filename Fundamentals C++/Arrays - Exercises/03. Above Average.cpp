#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int number[n];
    int sumNumber = 0;

    for (int count = 0; count < n; count++){
        cin >> number[count];
        sumNumber += number[count];
    }
    int avgFloor = floor(sumNumber / n);

    for (int curr = 0; curr < n; curr++){
        if (number[curr] >= avgFloor) {
            cout << number[curr] << ' ';
        }
    }


}