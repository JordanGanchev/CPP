#include <iostream>
using namespace std;
int main()
{
    int numberStudent;
    double grade;

    cin >> numberStudent;

    double five = 0.0, four = 0.0, three = 0.0, two = 0.0;
    int count5 = 0, count4 = 0, count3 = 0, count2;

    for (int i = 1; i <= numberStudent; i++) {
        cin >> grade;

        if (grade >= 5) {
            five += grade;
            count5++;
        }
        else if(grade >= 4) {
            four += grade;
            count4++;
        }
        else if (grade >= 3) {
            three += grade;
            count3++;
        }
        else if (grade >= 2) {
            two += grade;
            count2++;
        }
    }


    double avgGrade = (five + four + three + two) / numberStudent;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Top students: " << (count5 * 100.0) / numberStudent << "%" << endl;
    cout << "Between 4.00 and 4.99: " << (count4 * 100.0) / numberStudent << "%" << endl;
    cout << "Between 3.00 and 3.99: " << (count3 * 100.0) / numberStudent << "%" << endl;
    cout << "Fail: " << (count2 * 100.0) / numberStudent << "%" << endl;

    cout << "Average: " << avgGrade << endl;
}
