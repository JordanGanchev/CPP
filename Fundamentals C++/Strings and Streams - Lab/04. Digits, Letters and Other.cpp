#include <iostream>
#include <sstream>
#include <fstream>
#include <cctype>
using namespace std;

int main(void) {

    string line;
    getline(cin, line);

    istringstream istr(line);

    ostringstream digits, letters, other;

    char ch;
    while(istr >> ch) {
        if (isdigit(ch))
            digits << ch;
        else if (isalpha(ch))
            letters << ch;
        else
            other << ch;
    }

    cout << digits.str() << endl
        << letters.str() << endl
        << other.str() << endl;

    ofstream digitsFile("digits.txt");
    ofstream lettersFile("letters.txt");
    ofstream othersFile("others.txt");

    digitsFile << digits.str() << endl;
    lettersFile << letters.str() << endl;
    othersFile << other.str() << endl;

    digitsFile.close();
    lettersFile.close();
    othersFile.close();
    
    return 0;
}
// 4.cpp
#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

int main(void) {

    string line;
    getline(cin, line);

    istringstream istr(line);

    ostringstream digits, letters, other;

    char ch;
    while(istr >> ch) {
        if (isdigit(ch))
            digits << ch;
        else if (isalpha(ch))
            letters << ch;
        else
            other << ch;
    }

    cout << digits.str() << endl
        << letters.str() << endl
        << other.str() << endl;

    return 0;
}