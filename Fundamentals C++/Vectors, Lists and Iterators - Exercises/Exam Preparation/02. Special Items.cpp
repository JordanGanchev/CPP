#include <iostream>

using namespace std;

bool isMagical(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    string line;
    getline(cin, line);

    string result;
    char prevChar = 0;
    for (char c : line)
    {
        if (isMagical(c) || prevChar != c)
        {
            result += c;
            prevChar = c;
        }
    }
    cout << result << endl;

    return 0;
}

//_______________________________________________________

#include <iostream>
#include <sstream>
using namespace std;

bool isMagical(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    string line;
    getline(cin, line);

    ostringstream result;
    char prevChar = 0;
    for (char c : line)
    {
        if (isMagical(c) || prevChar != c)
        {
            result << c;
            prevChar = c;
        }
    }
    cout << result.str() << endl;

    return 0;
}