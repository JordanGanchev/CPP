#include <iostream>
using namespace std;
int main()
{
    int floors, rooms;
    cin >> floors >> rooms;

    for (int floor = floors; floor >= 1; floor--) {
        for (int room = 0; room < rooms; room++) {
            if (floor == floors) {
                cout << "L";
            }
            else if (floor % 2 == 0) {
                cout << "O";
            }
            else
            {
                cout << "A";
            }

            cout << floor << room << " ";
        }
        cout << endl;
    }
}
