#include <iostream>
#include <sstream>
#include <vector>
#include <climits>
using namespace std;

void readInVector(istream &input, int numberCount, vector<int> &data)
{
    while (numberCount--)
    {
        int number;
        cin >> number;
        data.push_back(number);
    }
}

int main()
{

    int n;
    cin >> n;

    vector<int> checkup;
    checkup.reserve(n);
    readInVector(cin, n, checkup);

    vector<int> installation;
    installation.reserve(n);
    readInVector(cin, n, installation);

    vector<int> yearsToLve;
    yearsToLve.reserve(n);
    for (int curPipe = 0; curPipe < checkup.size(); curPipe++)
    {
        int corrosionPerYear = installation[curPipe] - checkup[curPipe];
        yearsToLve.push_back(installation[curPipe] / corrosionPerYear);
    }

    for (int y : yearsToLve)
        cout << y << ' ';
    cout << endl;

    return 0;
}