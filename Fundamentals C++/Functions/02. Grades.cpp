#include <iostream>
using namespace std;

void printGrade(float grade) {
    if (grade >= 5.50) {
        cout << "Excellent" << endl;
    }
    else if (grade >= 4.5)
        cout << "Very good" << endl;
    else if (grade >= 3.5)
        cout << "Good" << endl;
    else if (grade >= 3.00)
        cout << "Poor" << endl;
    else
        cout << "Fail" << endl; 

}

int main() 
{
    float grade;
    cin >> grade;

    printGrade(grade);
} 