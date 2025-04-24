#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string> workDay = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
    set<string> weekend = { "Saturday", "Sunday" };

    string day;
    cin >> day;

    if (workDay.find(day) != workDay.end()) {
        cout << "Working day" << endl;
    }
    else if (weekend.find(day) != weekend.end()) {
        cout << "Weekend" << endl;
    }
    else { 
        cout << "Error" << endl;
    }

    return 0;
}
