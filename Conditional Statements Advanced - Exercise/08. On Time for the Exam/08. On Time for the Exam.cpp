#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int hourExam, minutesExam, hourArrival, minuteArrival;
    cin >> hourExam >> minutesExam >> hourArrival >> minuteArrival;

    int timeExam = hourExam * 60 + minutesExam;
    int timeArrival = hourArrival * 60 + minuteArrival;

    int difference_minutes = timeExam - timeArrival;

    int hour = abs(difference_minutes / 60);
    int minute = abs(difference_minutes % 60);


    if (difference_minutes < 0) {
        cout << "Late" << endl;

        if (difference_minutes <= -60) {
            if (minute < 10) {
                cout << hour << ":0" << minute << " hours after the start";
            }
            else
            {
                cout << hour << ":" << minute << " hours after the start";
            }
        }
        else {
            cout << abs(difference_minutes) << " minutes after the start";
        }
    }

    if (difference_minutes >= 0 && difference_minutes <= 30) {
        cout << "On time" << endl;
        cout << difference_minutes << " minutes before the start";
    }

    if (difference_minutes > 30) {
        cout << "Early" << endl;

        if (difference_minutes >= 60) {
            if (minute < 10) {
                cout << hour << ":0" << minute << " hours before the start";
            }
            else
            {
                cout << hour << ":" << minute << " hours before the start";
            }
        }
        else {
            cout << difference_minutes << " minutes before the start";
        }
    }
}

//------------------------------------------------------------------------------


#include <iostream>
using namespace std;

int main()
{
    int examHour, examMinutes, arrivalHour, arrivalMinutes;
    cin >> examHour >> examMinutes >> arrivalHour >> arrivalMinutes;

    int normalizedExamTime = examHour * 60 + examMinutes, normalizedArrivalTime = arrivalHour * 60 + arrivalMinutes;

    // Positive values => we have arrived early
    // Negative values => we are late
    int diffInMinutes = normalizedExamTime - normalizedArrivalTime;

    if (diffInMinutes > 30) cout << "Early" << endl;
    else if (diffInMinutes >= 0) cout << "On time" << endl;
    else cout << "Late" << endl;

    if (diffInMinutes != 0) {
        int absoluteDiffInMinutes = abs(diffInMinutes);
        if (absoluteDiffInMinutes < 60) cout << absoluteDiffInMinutes << " minutes";
        else {
            int formattedHours = absoluteDiffInMinutes / 60;
            int formattedMinutes = absoluteDiffInMinutes % 60;

            cout << formattedHours << ":" << string(formattedMinutes < 10, '0') << formattedMinutes << " hours";
        }

        if (diffInMinutes > 0) cout << " before";
        else cout << " after";

        cout << " the start" << endl;
    }
}