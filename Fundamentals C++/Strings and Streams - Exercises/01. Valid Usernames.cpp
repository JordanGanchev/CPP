#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

bool validUserName(const string & username){

    if (username.length() < 3 || username.length() > 16)
        return false;

    for (char c : username)
        if (!isalnum(c) && c != '_' && c != '-')
            return false;
    return true;
}

bool readUserName(istream & istr, string & username){
    getline(istr, username, ',');
    if (username[0] == ' ')
        username = username.substr(1);
    return (bool)istr;
}

int main()
{
    string buffer;
    getline(cin, buffer);
    istringstream istr(buffer);

    string username;
    while(readUserName(istr, username)){
        if (validUserName(username))
            cout << username << endl;
    }

    return 0;
}

//------------------------------------------------------------------

