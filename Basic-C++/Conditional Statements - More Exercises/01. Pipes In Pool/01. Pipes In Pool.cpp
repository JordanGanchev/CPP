#include <iostream>
using namespace std;

int main()
{
    int v, p1, p2;
    double h;

    cin >> v >> p1 >> p2 >> h;

    double pipe1 = p1 * h;
    double pipe2 = p2 * h;
    double common_liter = pipe1 + pipe2;

    
    cout.setf(ios::fixed);
    cout.precision(2);

    if (common_liter <= v) {
        double totalPercent = (common_liter / v) * 100;
        double pipePercent1 = (pipe1 / common_liter) * 100;
        double pipePercent2 = (pipe2 / common_liter) * 100;
        cout << "The pool is " << totalPercent << "% full. Pipe 1: " << pipePercent1 << "%. Pipe 2 : " << pipePercent2 << "%." << endl;
    }
    else
    {
        double diff = common_liter - v;
        cout << "For " << h << " hours the pool overflows with " << diff << " liters." << endl;
    }
}
