#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() 
{
    int numberPage;
    int pageHour;
    int numberDay;
    cin >> numberPage;
    cin >> pageHour;
    cin >> numberDay;

    double totalHourDay = (numberPage / pageHour) / numberDay;
    cout << totalHourDay;

    return 0;
}