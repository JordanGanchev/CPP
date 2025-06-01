#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<int> readNumbers(istream &inputStream)
{
    vector<int> res;

    string buffer;
    getline(inputStream, buffer);

    istringstream istr(buffer);

    int tmp;
    while (istr >> tmp)
        res.push_back(tmp);

    return res;
}

int main(void)
{

    vector<int> result = readNumbers(cin);

    while (true)
    {
        string buffer;
        getline(cin, buffer);

        if (buffer == "end")
            break;

        istringstream istr(buffer);

        string command;
        istr >> command;
        int par1;
        istr >> par1;

        if (command == "Add")
        {
            result.push_back(par1);
        }
        else if (command == "Remove")
        {

            vector<int>::iterator itFound = find(result.begin(), result.end(), par1);
            if (itFound != result.end())
                result.erase(itFound);
        }
        else if (command == "RemoveAt")
        {
            result.erase(result.begin() + par1);
        }
        else if (command == "Insert")
        {
            int par2;
            istr >> par2;
            result.insert(result.begin() + par2, par1);
        }
        else
        {
            cout << "Invalid command: \"" << buffer << "\"." << endl;
        }
    }

    for (int i : result)
        cout << i << ' ' << flush;
    cout << endl;

    return 0;
}