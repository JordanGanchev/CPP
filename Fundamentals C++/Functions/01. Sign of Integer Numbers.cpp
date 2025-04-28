#include <iostream>
using namespace std;

void printSign(int number){

    cout << "The number " << number << " is ";

    if (number > 0) {
        cout << "positive." << endl;
    }
    else if (number < 0) {
        cout << "negative." << endl;
    }
    else
    {
        cout << "zero." << endl;
    }
}

int main()
{
    int number;

    cin >> number;
    printSign(number);

    return 0;
}