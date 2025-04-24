#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int age;
    float grades;

    getline(cin, name);
    cin >> age >> grades;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Name: " << name << ", Age: " << age << ", Grade: " << grades << endl;
    
}
