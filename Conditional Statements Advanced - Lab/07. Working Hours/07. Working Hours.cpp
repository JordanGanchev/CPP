#include <iostream>

using namespace std;

int main()
{
    int hour;
    string dayWeek;

    cin >> hour >> dayWeek;

    if (dayWeek == "Monday" || dayWeek == "Tuesday" || dayWeek == "Wednesday" || dayWeek == "Thursday" || dayWeek == "Friday" || dayWeek == "Saturday") {
        if (hour >= 10 && hour <= 18) {
            cout << "open";
        }
        else {
            cout << "closed";
        }
    }
    else if (dayWeek == "Sunday") {
        cout << "closed";
    }
    {

    }
}
