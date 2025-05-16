// 2.1.cpp
#include <iostream>
#include <sstream>
using namespace std;

int main(void) {

    string buffer;
    getline(cin, buffer);

    istringstream istr(buffer);
    string word;
    while(istr >> word) {
        for(int cnt = 0; cnt < word.size(); cnt++)
            cout << word << flush;
    }

    cout << endl;

    return 0;
}
// 2.cpp
#include <iostream>
#include <sstream>
using namespace std;

int main(void) {

    string buffer;
    getline(cin, buffer);

    istringstream istr(buffer);
    ostringstream ostr;
    string word;
    while(istr >> word) {
        for(int cnt = 0; cnt < word.size(); cnt++)
            ostr << word;
    }

    cout << ostr.str() << endl;

    return 0;
}