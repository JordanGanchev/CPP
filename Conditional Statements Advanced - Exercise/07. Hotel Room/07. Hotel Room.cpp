#include <iostream>

using namespace std;

int main()
{
   
    string month;
    int numberNight;
    cin >> month >> numberNight;

    double apartment = 0.0;
    double studio = 0.0;


    if (month == "May" || month == "October") {
        apartment = 65.00;
        studio = 50.00;

        if (numberNight > 7 && numberNight <= 14) {
            studio *= 0.95;
        }
        else if (numberNight > 14) {
            studio *= 0.7;
        }
    }
    if (month == "June" || month == "September") {
        apartment = 68.7;
        studio = 75.2;

        if (numberNight > 14) {
            studio *= 0.8;
        }
    }
    if (month == "July" || month == "August") {
        apartment = 77.00;
        studio = 76.00;
    }
    if (numberNight > 14) {
        apartment *= 0.9;
    }
    double sumApartment = apartment * numberNight;
    double sumStudio = studio * numberNight;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Apartment: " << sumApartment << " lv." << endl;
    cout << "Studio: " << sumStudio << " lv." << endl;
}