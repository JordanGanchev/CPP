#include <iostream>
#include <sstream>
#include <vector>
#include <climits>
using namespace std;

int convertMilitaryTime(const string &busTimeStr)
{

    int minutesSinceMidnight = 0;

    int hour = (busTimeStr[0] - '0') * 10 + (busTimeStr[1] - '0');
    int minute = (busTimeStr[2] - '0') * 10 + (busTimeStr[3] - '0');

    return hour * 60 + minute;
}

int main()
{
    int n;
    cin >> n;

    vector<int> busArrivalTimes;
    busArrivalTimes.reserve(n);

    while (n--)
    {
        string busTimeStr;
        cin >> busTimeStr;

        int minutesSinceMidnight = convertMilitaryTime(busTimeStr);
        busArrivalTimes.push_back(minutesSinceMidnight);
    }

    string trainDepartureTimesStr;
    cin >> trainDepartureTimesStr;

    int trainDepartureTime = convertMilitaryTime(trainDepartureTimesStr);

    int bestBusDifference = INT_MAX;
    int bestBusDifferenceIndex = -1;

    for (int busPos = 0; busPos < busArrivalTimes.size(); busPos++)
    {

        int busArrival = busArrivalTimes[busPos];
        int difference;
        if (trainDepartureTime >= busArrival)
            difference = trainDepartureTime - busArrival;
        else
        {
            difference = (24 * 60) - busArrival;
            difference += trainDepartureTime;
        }
        if (difference < bestBusDifference)
        {
            bestBusDifference = difference;
            bestBusDifferenceIndex = busPos + 1;
        }
    }
    cout << bestBusDifferenceIndex << endl;

    return 0;
}