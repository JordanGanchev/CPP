#include <iostream>
#include <cctype>
using namespace std;

void capitalize(string & buffer){
    bool mustCapitalize = true;

    for (char & c : buffer) {
        if(isalpha(c)){
            if(mustCapitalize) {
                c = toupper(c);
                mustCapitalize = false;
            }
        }
        else{
            mustCapitalize = true;
        }
    }
}

int main()
{
    string buffer;
    getline(cin, buffer);

    capitalize(buffer);

    cout << buffer << endl;


    return 0;
}