
#include <iostream>
using namespace std;
int main()
{
    string day;
    cin >> day;

    if (day == "Monday" || day == "Tuesday" || day == "Friday") {
        cout << "12" << endl;
    }
    if (day == "Wednesday" || day == "Thursday") {
        cout << "14" << endl;
    }
    if (day == "Saturday" || day == "Sunday") {
        cout << "16" << endl;
    }

}

