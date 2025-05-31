#include <iostream>
using namespace std;

double calcDistance(double x, double y) {
     return x*x + y*y;
}

void printPoint(double x, double y){

    cout << '(' << x << ", " << y << ')';
}

int main() 

{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double z1 = calcDistance(x1, y1);
    double z2 = calcDistance(x2, y2);

    if (z1 <= z2)
        printPoint(x1, y1);
    else
        printPoint(x2, y2);
    
    cout << endl;

    return 0;
}