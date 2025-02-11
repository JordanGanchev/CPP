#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double recordSeconds, distanceInMeters, timeInSeconds;
    cin >> recordSeconds, distanceInMeters, timeInSeconds;

    double timeSwimm = distanceInMeters * timeInSeconds;

    double totalTime = timeSwimm + floor(distanceInMeters / 15) * 12.5;
    double result;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalTime > recordSeconds) {
        double result = recordSeconds - totalTime;
        cout << "No, he failed! He was " << result << " seconds slower.";
    } else {
        cout << "Yes, he succeeded! The new world record is " << abs(result) << " seconds.";
    }
}