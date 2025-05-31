#include <iostream>
#include <string>
using namespace std;

void calculateProduct(string p, int quantity) {
    cout.setf(ios::fixed);
    cout.precision(2);

    if (p == "coffee")
        cout << quantity * 1.5 << endl;
    else if (p == "water")
        cout << quantity * 1.0 << endl;
    else if (p == "coke")
        cout << quantity * 1.4;
    else if (p == "snacks")
        cout << quantity * 2.0;
}

int main() {
    
    string product;
    int quantity;
    cin >> product >> quantity;

    calculateProduct(product, quantity);
}