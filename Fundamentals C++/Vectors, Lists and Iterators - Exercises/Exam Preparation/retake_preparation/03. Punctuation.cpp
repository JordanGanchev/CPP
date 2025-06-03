#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

void checkSymbol(const string &token, int &number)
{
    for (char s : token)
    {
        if (ispunct(s))
            number++;
    }
}

int main()
{
    string line;
    getline(cin, line);

    vector<string> tokens;
    string token;

    vector<int> result1;
    vector<int> result2;

    int numberSentence = 1;
    int numberPunct = 0;

    stringstream ss(line);
    while (getline(ss, token, '|'))
    {
        checkSymbol(token, numberPunct);
        result1.push_back(numberSentence);
        result1.push_back(numberPunct);
        numberSentence++;
        numberPunct = 0;
    }
    for (size_t i = 0; i + 1 < result1.size(); i += 2)
    {
    }

    for (size_t i = 0; i + 1 < result2.size(); i += 2)
    {
        cout << result2[i] << " symbol" << ' ' << "sentences: " << result2[i + 1] << endl;
    }

    return 0;
}

//-----------------------------------------------------

// #include <iostream>
// #include <sstream>
// #include <vector>
// #include <string>
// #include <map>
// #include <cctype>

// using namespace std;

// bool isPunctuation(char c)
// {
//     string punctuation = "!\"#$%&'()*+,-./:;<=>?@[]^_`{}~";
//     return punctuation.find(c) != string::npos;
// }

// int countPunct(const string &s)
// {
//     int count = 0;
//     for (char ch : s)
//     {
//         if (isPunctuation(ch))
//             count++;
//     }
//     return count;
// }

// int main()
// {
//     string line;
//     while (getline(cin, line))
//     {
//         if (line.empty())
//             continue;

//         stringstream ss(line);
//         string sentence;
//         int sentenceNumber = 1;
//         map<int, vector<int>> groups;

//         while (getline(ss, sentence, '|'))
//         {
//             int punctCount = countPunct(sentence);
//             groups[punctCount].push_back(sentenceNumber);
//             sentenceNumber++;
//         }
//         int num = 0;
//         for (const auto &pair : groups)
//         {
//             cout << pair.first << " symbol sentences: ";
//             for (int sn : pair.second)
//                 num = sn;
//         }
//         cout << num << endl;
//     }

//     return 0;
// }

//-----------------------------------------------------------

// #include <iostream>
// #include <sstream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// bool isPunctuation(char c)
// {
//     string punctuation = "!\"#$%&'()*+,-./:;<=>?@[]^_`{}~";
//     return punctuation.find(c) != string::npos;
// }

// int countPunct(const string &s)
// {
//     int count = 0;
//     for (char ch : s)
//         if (isPunctuation(ch))
//             count++;
//     return count;
// }

// int main()
// {
//     string line;
//     while (getline(cin, line))
//     {
//         if (line.empty())
//             continue;

//         vector<int> counts;          // Колко пунктуации има всяко изречение
//         vector<int> sentenceNumbers; // Номера на изреченията

//         stringstream ss(line);
//         string sentence;
//         int sentenceNum = 1;

//         while (getline(ss, sentence, '|'))
//         {
//             int punct = countPunct(sentence);
//             counts.push_back(punct);
//             sentenceNumbers.push_back(sentenceNum++);
//         }

//         // Събираме уникални стойности на пунктуации
//         vector<int> uniqueCounts;
//         for (int c : counts)
//         {
//             if (find(uniqueCounts.begin(), uniqueCounts.end(), c) == uniqueCounts.end())
//             {
//                 uniqueCounts.push_back(c);
//             }
//         }

//         sort(uniqueCounts.begin(), uniqueCounts.end());

//         // Групиране по стойности
//         for (int punctValue : uniqueCounts)
//         {
//             cout << punctValue << " symbol sentences: ";
//             for (size_t i = 0; i < counts.size(); ++i)
//             {
//                 if (counts[i] == punctValue)
//                     cout << i + 1 << " ";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }
