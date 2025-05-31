#include <iostream>
using namespace std;

int main() 
{

    int n;
    cin >> n;

    int numbers[n];

    for (int count = 0; count < n; count++)
        cin >> numbers[count];

    int counters[10] = {};

    for (int count = 0; count < n; count++){
        int cur_numb = numbers[count];
        counters[cur_numb]++;
    }

    int max_count = 0;
    for (int count = 0; count < 10; count++){
        if(counters[count] > max_count)
            max_count = counters[count];
    }
    for (int count = 0; count < 10; count++){
        if(counters[count] == max_count)
            cout << count << ' ';
    }
    cout << endl;

    
    return 0;
}
