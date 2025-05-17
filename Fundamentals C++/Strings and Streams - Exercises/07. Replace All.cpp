#include <iostream>

using namespace std;

int main()
{
    string line;
    getline(cin , line);

    string fnd;
    getline(cin, fnd);

    string repl;
    getline(cin, repl);

    int foundPos = line.find(fnd);
    while (foundPos != string::npos){
        line.replace(foundPos, fnd.length(), repl);
        foundPos = line.find(fnd, foundPos+repl.length());
    }
    
    cout << line << endl;

    return 0;
}