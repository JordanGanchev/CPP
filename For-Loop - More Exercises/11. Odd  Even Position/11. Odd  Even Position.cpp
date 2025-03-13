#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    double num;
    cin >> n;

    double oddSum = 0.0;
    double oddMin = INT_MAX;
    double oddMax = INT_MIN;
    double evenSum = 0.0;
    double evenMin = INT_MAX;
    double evenMax = INT_MIN;

    for (int i = 1; i <= n; i++) {
        cin >> num;

        if (i % 2 == 0) {
            evenSum += num;
            if (num > evenMax) evenMax = num;
            if (num < evenMin) evenMin = num;
        }
        else {
            oddSum += num;
            if (num > oddMax) oddMax = num;
            if (num < oddMin) oddMin = num;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "OddSum=" << oddSum << "," << endl;

    if (oddMin == INT_MAX)
        cout << "OddMin=No" << "," << endl;
    else
        cout << "OddMin=" << oddMin << "," << endl;

    if (oddMax == INT_MIN)
        cout << "OddMax=No" << "," << endl;
    else
        cout << "OddMax=" << oddMax << "," << endl;

    cout << "EvenSum=" << evenSum << "," << endl;

    if (evenMin == INT_MAX)
        cout << "EvenMin=No" << "," << endl;
    else
        cout << "EvenMin=" << evenMin << "," << endl;

    if (evenMax == INT_MIN)
        cout << "EvenMax=No" << "," << endl;
    else
        cout << "EvenMax=" << evenMax << endl;

    return 0;
}




//#include <iostream>
//#include <climits>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//    int n;
//    double num;
//    cin >> n;
//
//    double oddSum = 0.0;
//    double oddMin = INT_MAX;
//    double oddMax = INT_MIN;
//    double evenSum = 0.0;
//    double evenMin = INT_MAX;
//    double evenMax = INT_MIN;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> num;
//
//        if (i % 2 == 0) {
//            if (num > evenMax) {
//                evenMax = num;
//            }
//            if (num < evenMin) {
//                evenMin = num;
//            }
//            evenSum += num;
//        }
//        else {
//            if (num > oddMax) {
//                oddMax = num;
//            }
//            if (num < oddMin) {
//                oddMin = num;
//            }
//            oddSum += num;
//        }
//    }
//
//    cout.setf(ios::fixed);
//    cout.precision(2);
//
//    cout << "OddSum = " << oddSum << endl;
//    cout << "OddMin = " << (oddMin == INT_MAX ? "No" : to_string(oddMin)) << endl;
//    cout << "OddMax = " << (oddMax == INT_MIN ? "No" : to_string(oddMax)) << endl;
//    cout << "EvenSum = " << evenSum << endl;
//    cout << "EvenMin = " << (evenMin == INT_MAX ? "No" : to_string(evenMin)) << endl;
//    cout << "EvenMax = " << (evenMax == INT_MIN ? "No" : to_string(evenMax)) << endl;
//
//    return 0;
//}