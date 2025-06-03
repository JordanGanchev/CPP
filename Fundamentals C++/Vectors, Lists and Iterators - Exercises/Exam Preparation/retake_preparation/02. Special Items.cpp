#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool vowels(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else
        return false;
}

int main()
{

    string line;
    getline(cin, line);

    vector<int> outputList;
    char a = 0;

    for (int i = 0; i < line.length(); i++)
    {
        if (vowels(line[i]))
        {
            outputList.push_back(line[i]);
        }
        else if (line[i] != a)
        {
            outputList.push_back(line[i]);
        }
        a = line[i];
    }
    for (char c : outputList)
    {
        cout << c;
    }
    cout << endl;

    return 0;
}

//-----------------------------------------------

// #include <iostream>
// #include <sstream>
// using namespace std;

// bool isMagical(char c)
// {
//     return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
// }

// int main()
// {
//     string line;
//     getline(cin, line);

//     ostringstream result;
//     char prevChar = 0;
//     for (char c : line)
//     {
//         if (isMagical(c) || prevChar != c)
//         {
//             result << c;
//             prevChar = c;
//         }
//     }
//     cout << result.str() << endl;

//     return 0;
// }