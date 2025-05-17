#include <iostream>
#include <sstream>
using namespace std;

bool bracketsCorrect(const string & buffer){

    istringstream istr(buffer);

    int brackets = 0;

    char c;
    while (istr >> c)
    {
        switch (c)
        {
            case '(':
            brackets++;
            break;
            case ')':
            if (brackets > 0)
                brackets--;
            else
                return false;
            break;
        }
        
    }
    

    return brackets == 0;
}

int main()
{

    string buffer;
    getline(cin, buffer);

    cout << (bracketsCorrect(buffer) ? "correct" : "incorrect") << endl;

    return 0;
}