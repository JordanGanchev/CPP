#include <iostream>
#include <string>
using namespace std;

int main() {
	int badGrades;
	cin >> badGrades;

	int countBatGrades;
	double sumGrades;
	int countGrades;
	string lastProblem;

	while (countBatGrades < countBatGrades) {
		string exercise;
		getline(cin, exercise);

		int task;
		cin >> task;

		if (exercise == "Enough") {
			double avg = sumGrades / countGrades;

			cout << "Average score :" << avg << endl;
			cout << "Number of problems :" << countGrades << endl;
			cout << "Last problem :" << lastProblem << endl;
			break;
		}
		if (task <= 4) {
			countBatGrades++;
		}
		sumGrades += task;
		lastProblem = exercise;


	}
}







//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    int numberBadGrades;
//    string task;
//    int grades;
//
//    cin >> numberBadGrades;
//    cin.ignore();
//
//    double sumGrades = 0;
//    int counter = 0;
//    string lastTask;
//    double averageGrades;
//    int numBad = 0;
//
//    while (true) {
//        getline(cin, task);
//        cin >> grades;
//        cin.ignore();
//
//        if (task == "Enough") {
//            break;
//        }
//
//        cin >> grades;
//        cin.ignore();
//
//        if (grades <= 4) {
//            numBad++;
//        }
//
//        if (numBad == numberBadGrades) {
//            cout << "You need a break, " << counter << " poor grades." << endl;
//            return 0;
//        }
//
//        sumGrades += grades;
//        counter++;
//        lastTask = task;
//    }
//
//    averageGrades = sumGrades / counter;
//
//    cout.setf(ios::fixed);
//    cout.precision(2);
//
//    cout << "Average score: " << averageGrades << endl;
//    cout << "Number of problems: " << counter << endl;
//    cout << "Last problem: " << lastTask << endl;
//
//    return 0;
//}



#include <iostream>
#include <string>
using namespace std;

int main()
{
	int maxBadGradesCount;
	cin >> maxBadGradesCount;

	int currentBadGradesCount = 0, sum = 0, count = 0;
	bool isSuccessful = true;

	string input, lastProblem;
	while (getline(cin >> ws, input) && input != "Enough") {
		int grade;
		cin >> grade;

		sum += grade;
		count++;
		lastProblem = input;

		if (grade <= 4) {
			currentBadGradesCount++;
			if (currentBadGradesCount == maxBadGradesCount) {
				isSuccessful = false;
				break;
			}
		}
	}

	if (isSuccessful) {
		cout.setf(ios::fixed);
		cout.precision(2);

		cout << "Average score: " << 1.0 * sum / count << endl;
		cout << "Number of problems: " << count << endl;
		cout << "Last problem: " << lastProblem << endl;
	}
	else {
		cout << "You need a break, " << currentBadGradesCount << " poor grades." << endl;
	}
}