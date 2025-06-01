#include <iostream>
#include <sstream>
#include <list>

using namespace std;

int main()
{

    int n;
    cin >> n;

    list<int> numbers;
    int avr = 0;

    for (int curr = 0; curr < n; curr++)
    {
        int number;
        cin >> number;
        avr += number;
        numbers.push_back(number);
    }

    avr = avr / n;

    for (list<int>::iterator it = numbers.begin(); it != numbers.end();)
    {
        int number = *it;
        if (number > avr)
            it = numbers.erase(it);
        else
            it++;
    }

    int index = 0;
    int oddSum = 0, evenSum = 0;
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++, index++)
    {
        int number = *it;
        if (index % 2)
        {
            oddSum += number;
        }
        else
        {
            evenSum += number;
        }
    }

    cout << oddSum * evenSum << endl;

    return 0;
}