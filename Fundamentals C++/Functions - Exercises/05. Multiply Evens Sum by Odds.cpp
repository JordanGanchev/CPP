#include <iostream>
using namespace std;

bool getDigit(int n, int & s){
    s = n % 10;

    return s % 2 == 0;
}

int main() {
    int n;
    cin >> n;

    int sumOdd = 0;
    int sumEven = 0;

    while (n){
    int single;

    if (getDigit(n, single)) {
            sumEven += single;
    }
    else{
        sumOdd += single;
    }

    n /= 10;
}

cout << sumOdd * sumEven << endl;
    
return 0;

}