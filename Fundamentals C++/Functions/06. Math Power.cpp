#include <iostream>
using namespace std;

long mypow(int number, int power){

    long result = 1;
    while (power--)
    {
        result *= number;
    }
    return result;
    
}

int main() {

    long number, power;

    cin >> number >> power;

    cout << mypow(number, power) << endl;
}