#include <iostream>
#include <sstream>
#include <list>
using namespace std;

bool checkExpression(const list<char> &expression)
{

    int br0count = 0; // '('
    int br1count = 0; // '['
    int br2count = 0; // '{'

    for (list<char>::const_iterator it = expression.begin();
         it != expression.end();
         it++)
    {
        switch (*it)
        {
        case '(':
            br0count++;
            break;
        case ')':
            if (br0count != 0)
                br0count--;
            else
                return false;
            break;

        case '[':

            if (br0count != 0)
                return false;
            br1count++;
            break;
        case ']':
            if (br0count != 0)
                return false;
            // if (br1count != 0)
            //     return false;
            br1count--;
            break;

        case '{':
            if (br0count != 0 || br1count != 0)
                return false;
            br2count++;
            break;

        case '}':
            if (br0count != 0 || br1count != 0)
                return false;
            // if (br2count != 0)
            //     return false;
            br2count--;
            break;
        }
    }

    return br0count == 0 && br1count == 0 && br2count == 0;
}

int main()
{
    string str;
    getline(cin, str);

    list<char> expression;
    for (char c : str)
        expression.push_back(c);

    cout << (checkExpression(expression) ? "valid" : "invalid") << endl;

    return 0;
}

// #include <iostream>
// #include <stack>
// using namespace std;

// bool checkExpression(const string &expression)
// {
//     stack<char> s;

//     for (char c : expression)
//     {
//         if (c == '(' || c == '[' || c == '{')
//         {
//             s.push(c);
//         }
//         else if (c == ')' || c == ']' || c == '}')
//         {
//             if (s.empty())
//                 return false;

//             char top = s.top();
//             if ((c == ')' && top != '(') ||
//                 (c == ']' && top != '[') ||
//                 (c == '}' && top != '{'))
//                 return false;

//             s.pop();
//         }
//     }

//     return s.empty();
// }

// int main()
// {
//     string str;
//     getline(cin, str);

//     cout << (checkExpression(str) ? "valid" : "invalid") << endl;

//     return 0;
// }

// #include <iostream>
// #include <sstream>
// #include <list>
// using namespace std;

// bool checkExpression(const list<char> &expression)
// {
//     int br0count = 0; // ()
//     int br1count = 0; // []
//     int br2count = 0; // {}

//     for (list<char>::const_iterator it = expression.begin(); it != expression.end(); ++it)
//     {
//         switch (*it)
//         {
//         case '(':
//             br0count++;
//             break;

//         case ')':
//             if (br0count == 0 || br1count > 0 || br2count > 0)
//                 return false;
//             br0count--;
//             break;

//         case '[':
//             if (br2count > 0)
//                 return false;
//             br1count++;
//             break;

//         case ']':
//             if (br1count == 0 || br2count > 0)
//                 return false;
//             br1count--;
//             break;

//         case '{':
//             if (br0count > 0 || br1count > 0)
//                 return false;
//             br2count++;
//             break;

//         case '}':
//             if (br2count == 0)
//                 return false;
//             br2count--;
//             break;
//         }
//     }

//     return br0count == 0 && br1count == 0 && br2count == 0;
// }

// int main()
// {
//     string str;
//     getline(cin, str);

//     list<char> expression;
//     for (char c : str)
//         expression.push_back(c);

//     cout << (checkExpression(expression) ? "valid" : "invalid") << endl;

//     return 0;
// }
