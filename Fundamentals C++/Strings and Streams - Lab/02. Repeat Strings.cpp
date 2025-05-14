#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string buffer;
    getline(cin, buffer);

    istringstream istr(buffer);
    ostringstream ostr;
    string word;

    while(istr >> word) {
        for (int curr = 0; curr < word.size(); curr++){
            ostr << word;
        }
    }

    cout << ostr.str() << endl;

    return 0;

}