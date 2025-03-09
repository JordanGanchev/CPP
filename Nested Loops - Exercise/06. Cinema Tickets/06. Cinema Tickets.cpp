#include <iostream>
#include <string>
using namespace std;
int main()
{
    int standartTickets = 0, studentTickets = 0, kidTickets = 0;

    string movieName;
    while (getline(cin >> ws, movieName) && movieName != "Finish") {
        int capacity;
        cin >> capacity;

        int soldTickets = 0;
        for (int i = 0; i < capacity; i++) {
            string ticketType;
            cin >> ticketType;

            if (ticketType == "standard") {
                standartTickets++;
            }
            else if (ticketType == "student") {
                studentTickets++;
            }
            else if (ticketType == "kid") {
                kidTickets++;
            }
            else
            {
                break;
            }
            soldTickets++;
        } 
        cout.setf(ios::fixed);
        cout.precision(2);

        double fillPercentage = 100.0 * soldTickets / capacity;
        cout << movieName << " - " << fillPercentage << "% full." << endl;
    }

    int totalTickets = standartTickets + studentTickets + kidTickets;
    cout << "Total tickets: " << totalTickets << endl;
    cout << 100.0 * studentTickets / totalTickets << "% student tickets." << endl;
    cout << 100.0 * standartTickets / totalTickets << "% standart tickets." << endl;
    cout << 100.0 * kidTickets / totalTickets << "% kid tickets." << endl;
}
