#include <iostream>
#include <string>
using namespace std;

int main() {
    int length, width;
    cin >> length >> width;

    int totalPieces = length * width;
    string input;

    while (cin >> input && input != "STOP") {
        int piecesTaken = stoi(input);
        totalPieces -= piecesTaken;

        if (totalPieces < 0) {
            cout << "No more cake left! You need " << -totalPieces << " pieces more." << endl;
            return 0;
        }
    }

    cout << totalPieces << " pieces are left." << endl; 
    return 0;
}
