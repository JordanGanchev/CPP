#include <iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;

    double holiDay = day * 127;
    double workDay = (365 - day) * 63;
    double totalDay = holiDay + workDay;

    if (totalDay < 30000) {
        double diff = 30000 - totalDay;
        double hour = int(diff) / 60;
        double minutes = int(diff) % 60;

        cout << "Tom sleeps well " << endl << hour << " hours and " << minutes << " minutes less for play";
    }
    else
    {
        double diff = totalDay - 30000;
        double hour = int(diff) / 60;
        double minutes = int(diff) % 60;
        cout << "Tom will run away " << endl << hour << " hours and " << minutes << " minutes more for play";
    }
}