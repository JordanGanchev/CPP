//#include <iostream>
//#include <string>
//#include <cctype>
//using namespace std;
//
//int main()
//{
//    string steps;
//    int commonSteps = 0;
//    bool isSteps = false;
//
//    while (getline(cin, steps)) {
//
//        if (isdigit(steps[0])) {
//            int number = stoi(steps);
//            commonSteps += number;
//        }
//        else
//        {
//            getline(cin, steps);
//            commonSteps += stoi(steps);
//            continue;
//        }
//        if (commonSteps >= 10000) {
//            isSteps = true;
//            break;
//        }
//    }
//
//    if (isSteps) {
//        cout << "Goal reached! Good job!" << endl;
//    }
//    else
//    {
//        int diff = 10000 - commonSteps;
//        cout << diff << " more steps to reach goal." << endl;
//
//    }
//}

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

	const int threshold = 10000;
	int totalSteps = 0;

	string input;

	while (totalSteps < threshold && getline(cin, input) && input != "Going home") {
		int currentSteps = stoi(input);
		totalSteps += currentSteps;
	}

	if (totalSteps < threshold) {
		int finalSteps;
		cin >> finalSteps;

		totalSteps += finalSteps;
	}

	if (totalSteps < threshold) {
		
		cout << threshold - totalSteps << " more steps to reach goal." << endl;
	}
	else
	{
		cout << "Goal reached! Good job!" << endl;
	}
}