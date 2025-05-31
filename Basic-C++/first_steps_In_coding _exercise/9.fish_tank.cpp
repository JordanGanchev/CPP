#include <iostream>
using namespace std;

int main() 
{
    int width, length, height;
    double takenPercentage;
    cin >> width >> length >> height >> takenPercentage;

    double volumeInLiters = 0.001 * width * length * height;
    double freeVolumeInLiters = (1 - 0.01 * takenPercentage) * volumeInLiters;

    cout << freeVolumeInLiters << endl;

    return 0;
}
