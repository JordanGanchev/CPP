#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
        cin >> numbers[i];

    while (numbers.size() > 1)
    {
        vector<int> next;
        for (size_t i = 0; i < numbers.size() - 1; ++i)
        {
            next.push_back(numbers[i] + numbers[i + 1]);
        }
        numbers = next;
    }

    cout << numbers[0] << endl;

    return 0;
}