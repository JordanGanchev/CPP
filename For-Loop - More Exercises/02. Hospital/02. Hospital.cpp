#include <iostream>
using namespace std;
int main()
{
    int period, sick;
    cin >> period;

    int doctor = 7;
    int reviewed = 0;
    int notReviewed = 0;

    for (int i = 1; i <= period; i++) {
        cin >> sick;

        if (i % 3 == 0) {
            if (notReviewed > reviewed) {
                doctor++;
            }

        }
        if (sick >= doctor) {
            reviewed += doctor;
            notReviewed += (sick - doctor);
        }
        else
        {
            reviewed += sick;
        }
    }
    cout << "Treated patients: " << reviewed << "." << endl;
    cout << "Untreated patients: " << notReviewed << "." << endl;
}