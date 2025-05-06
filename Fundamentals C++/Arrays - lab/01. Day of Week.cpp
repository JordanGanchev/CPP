#include <iostream>

using namespace std;

string daysOfWeek[] = {
    "Invalid day!",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
};

void printDoW(string days[], int day) {
    if (day < 1 || day > 7)
        day = 0;
    cout << days[day] << endl;
}

int main() 
{
    int day;
    cin >> day;

    printDoW(daysOfWeek, day);
    return 0;
}