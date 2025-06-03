#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num = 0;
    int sumNum = 0;
    list<int> lastNum;
    list<int> common;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sumNum += num;
        common.push_back(num);
    }
    int avr = sumNum / n;

    for (int c : common)
        if (c <= avr)
            lastNum.push_back(c);

    lastNum.sort(greater<int>());

    if (lastNum.empty())
        cout << "No" << endl;

    for (int i : lastNum)
    {
        if (i % 2 == 0)
            cout << i << ' ';
    }

    cout << endl;

    return 0;
}

//---------------------------------------------------------

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 0)
    {
        cout << "No" << endl;
        return 0;
    }

    long long sumNum = 0;
    int num;
    list<int> lastNum;
    list<int> common;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sumNum += num;
        common.push_back(num);
    }

    int avr = sumNum / n;

    for (int c : common)
        if (c < avr)
            lastNum.push_back(c);

    if (lastNum.empty())
    {
        cout << "No" << endl;
        return 0;
    }

    lastNum.sort(greater<int>());

    bool printed = false;
    for (int i : lastNum)
    {
        if (i % 2 == 0)
        {
            cout << i << ' ';
            printed = true;
        }
    }

    if (!printed)
    {
        cout << "No";
    }

    cout << endl;

    return 0;
}
