#include <iostream>

using namespace std;

int main()
{
    double age;
    cin >> age;
    char gender;
    cin >> gender;

    if (age < 16) {
        if (gender == 'f') {
            cout << "Miss" << endl;
        }
        else
        {
            cout << "Master" << endl;
        }
    }
    else {
        if (gender == 'f') {
            cout << "Ms." << endl;
        }
        else {
            cout << "Mr." << endl;
        }
    }
}