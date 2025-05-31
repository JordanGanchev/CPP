#include <iostream>
#include <sstream>
using namespace std;

string reverseWord(const string & input){
    ostringstream ostr;

    int curr = input.size() - 1;
    for(int curr = input.size() - 1; curr >= 0; curr--)
    {
        ostr << input[curr];
    }
    

    return ostr.str();
}

int main()
{
    string input;

    getline(cin, input);

    while (input != "end")
    {
        string reversed = reverseWord(input);
        cout << input << " = " << reversed << endl;
        getline(cin, input);
    }
    
    
    return 0;

}