#include <iostream>
#include <string>
using namespace std;

int main(void) {

    string first, second;
    getline(cin, first);
    getline(cin, second);

    int pos = second.find(first);
    while(pos != string::npos) {
        second.erase(pos, first.size());
        pos = second.find(first);
    }

    cout << second << endl;

    return 0;
}