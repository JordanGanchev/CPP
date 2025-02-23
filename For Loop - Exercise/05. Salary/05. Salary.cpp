#include <iostream>
using namespace std;

int main()
{
    int n, salary;
    cin >> n >> salary;

    for (int i = 0; i < n && salary > 0; i++) {
        string currentTab;
        cin >> currentTab;

        if (currentTab == "Facebook") {
            salary -= 150;
        }
        else if (currentTab == "Instagram") {
            salary -= 100;
        }
        else if (currentTab == "Reddit") {
            salary -= 50;
        }
    }
    if (salary <= 0) {
        cout << "You have lost your salary." << endl;
    }
    else
    {
        cout << salary << endl;
    }

}