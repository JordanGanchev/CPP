#include <iostream>
using namespace std;

int getMaxThree(int a, int b, int c);
int getMinThree(int a, int b, int c);

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    cout << getMinThree(a, b, c) << endl;
}

int getMinThree(int a, int b, int c) {

    if (a < c && a < c)
        return a;
    else if (b < c && b < a)
        return b;
    else
        return c;
}