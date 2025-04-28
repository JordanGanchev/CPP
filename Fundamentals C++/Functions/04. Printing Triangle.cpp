#include <iostream>
using namespace std;

void print1toN(int n) {
    for (int curr = 1; curr <= n; curr++)
        cout << curr << ' ';
    cout << endl;
} 

int main() {
    int n;
    cin >> n;

    for (int curr = 1; curr <= n; curr++)
        print1toN(curr);

    for (int curr = n-1; curr != 0; curr--)
        print1toN(curr);
        
}