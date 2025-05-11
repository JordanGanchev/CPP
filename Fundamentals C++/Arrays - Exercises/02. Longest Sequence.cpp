#include <iostream>
using namespace std;

int main() 
{

    int n;
    cin >> n;

    int numbers[n];

    for (int count = 0; count < n; count++)
        cin >> numbers[count];

    int max_sequence_size = 1;
    int curr_sequence_size = 1;
    int max_sequence_number = numbers[0];
    int curr_sequence_number = numbers[0];

    for (int count = 1; count < n; count++) {
        if (numbers[count] == curr_sequence_number){
            curr_sequence_size++;
        }
        else{
            if (curr_sequence_size >= max_sequence_size) {
                max_sequence_size = curr_sequence_size;
                max_sequence_number = curr_sequence_number;
            }
            curr_sequence_size = 1;
            curr_sequence_number = numbers[count];

        }
    }

    if (curr_sequence_size >= max_sequence_size) {
                max_sequence_size = curr_sequence_size;
                max_sequence_number = curr_sequence_number;
            }

    for(int count =0; count < max_sequence_size; count++)
        cout << max_sequence_number << ' ';
    cout << endl;

    return 0;
}
