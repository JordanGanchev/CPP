#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    // long long result = 1;
    // for (int curr = 2; curr <= n; curr++)
    //     result *= curr;

    long long result = n * factorial(n - 1); // recursion
    
        return result;
}

int main() {
    int a, b;
    cin >> a >> b;

    long long af = factorial(a);
    long long bf = factorial(b);

    double result = (double)af / bf;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << result << endl;

    return 0;
}