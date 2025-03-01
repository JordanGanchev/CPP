#include <iostream>
using namespace std;

#include <iomanip>

int main()
{
    const int MIN_GDADE_NEEDED = 4;
    const int YEARS_IN_SCHOOL = 12;

    string name;
    cin >> name;

    int yearInSchool = 1;
    double gradesSum = 0;
    bool failedOnce = false;

    while (yearInSchool <= YEARS_IN_SCHOOL) {
        double grade;
        cin >> grade;

        if (grade < MIN_GDADE_NEEDED) {
            if (failedOnce) {
                cout << name << " has been excluded at " << yearInSchool << " grade";
                return 0;
            }
            else
            {
                failedOnce = true;
                continue;
            }
        }

        gradesSum += grade;
        yearInSchool += 1;
     }

    double avgGrade = gradesSum / YEARS_IN_SCHOOL;
    cout << name << " graduated.Average grade : " << fixed << setprecision(2) << avgGrade << endl;

}
