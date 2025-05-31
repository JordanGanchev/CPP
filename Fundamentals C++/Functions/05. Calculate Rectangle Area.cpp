#include <iostream>
using namespace std;

int rectangleArea(int width, int height) {
    return width * height;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << rectangleArea(a, b) << endl;
}