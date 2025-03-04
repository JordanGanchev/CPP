#include <iostream>
#include <string>
using namespace std;
int main()
{
    int length, width, height;
    cin >> length >> width >> height;
    int totalVolume = length * width * height;

    string number;

    while (cin >> number && number != "Done") {
        
        totalVolume -= stoi(number);

        if (totalVolume < 0) {

            cout << "No more free space!You need " << -totalVolume << " Cubic meters more.";
            return 0;
        }
    }

    cout << totalVolume << " Cubic meters left.";
}
