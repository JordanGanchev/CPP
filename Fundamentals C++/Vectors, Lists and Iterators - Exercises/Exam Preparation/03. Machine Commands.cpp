#include <iostream>
#include <sstream>
#include <list>
using namespace std;

int main()
{

    list<int> numbers;

    while (true)
    {
        string command;
        getline(cin, command);

        if (command == "end")
            break;

        istringstream numberStream(command);
        int number;
        if (numberStream >> number)
        {
            numbers.push_back(number);
        }
        else
        {
            if (command == "discard")
            {
                numbers.pop_back();
            }
            else
            {
                int a = numbers.back();
                numbers.pop_back();
                int b = numbers.back();
                numbers.pop_back();
                if (command == "sum")
                    numbers.push_back(a + b);
                else if (command == "subtract")
                    numbers.push_back(a - b);
                else
                {
                    // it`s 'concat'
                    ostringstream concat;
                    concat << b << a;
                    string concatenated = concat.str();

                    istringstream numberStream(concatenated);
                    int number;
                    if (numberStream >> number)
                    {
                        numbers.push_back(number);
                    }
                }
            }
        }
    }

    for (int i : numbers)
        cout << i << endl;

    return 0;
}