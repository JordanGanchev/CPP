#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;

    cout.setf(ios::fixed);
    cout.precision(2);

    int presentationsCount = 0;
    double allGradesSum = 0;
    string presentationName;
    while (getline(cin >> ws, presentationName) && presentationName != "Finish") {
        double currentGradesSum = 0;

        for (int i = 0; i < n; i++) {
            double currentGrade;
            cin >> currentGrade;

            currentGradesSum += currentGrade;
        }

        double presentationAverage = currentGradesSum / n;
        cout << presentationName << " - " << presentationAverage << '.' << endl;

        allGradesSum += currentGradesSum;
        presentationsCount++;
    }

    double finalAveragew = allGradesSum / (presentationsCount * n);
    cout << "Student's final assessment is " << finalAveragew << '.' << endl;
}