#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool checkPasswordLengh(string s){
    return s.length() >= 6 && s.length() <= 10;
}

bool checkPasswordContents(string s){

    for (int curr = 0; curr < s.length(); curr++)
        if (!isalnum(s[curr]))
            return false;
    return true;
}

bool checkPasswordDigits(string s){
    int digitsCount = 0;

    for (int curr = 0; curr <= s.length(); curr++)
        if (isdigit(s[curr]))
            digitsCount++;
    return digitsCount >= 2;
}


void checkPassword(string s, bool & lengthOK, bool & contentsOK, bool & atLeastTwoDigits){

    lengthOK = checkPasswordLengh(s);
    contentsOK = checkPasswordContents(s);
    atLeastTwoDigits = checkPasswordDigits(s);
}

int main() {
    
    string s;
    getline(cin, s);

    bool lengthOK;
    bool contentsOK;
    bool atLeastTwoDigits;

    checkPassword(s, lengthOK, contentsOK, atLeastTwoDigits);

    if (lengthOK && contentsOK && atLeastTwoDigits) {
        cout << "Password is valid" << endl;
    }
    else{
        if (!lengthOK)
            cout << "Password must be between 6 and 10 characters" << endl;
        if (!contentsOK)
            cout << "Password must consist only of letters and digits" << endl;
        if (!atLeastTwoDigits) 
            cout << "Password must have at least 2 digits" << endl;
    }

    return 0;
}