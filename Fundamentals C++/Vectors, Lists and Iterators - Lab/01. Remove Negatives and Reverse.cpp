
#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>
using namespace std;

vector<int> readNumbers(const string & str) {
    vector<int> res;

    istringstream istr(str);

    int tmp;
    while(istr >> tmp)
    res.push_back(tmp);

    return res;
}

void print(const vector<int> & numbers) {

    if (numbers.size() == 0) {
        cout << "empty" << endl;
        return;
    }

    for(int i : numbers)
        cout << i << ' ' << flush;
        cout << endl;
}

void printReverse(const vector<int> & numbers) {

    if (numbers.size() == 0) {
        cout << "empty" << endl;
        return;
}

    vector<int>::const_iterator it = numbers.end();
        it--;

        while(true) {
        cout << *it << ' ';
        if (it == numbers.begin())
            break;
        it--;
}

cout << endl;
}

// Challenge: use reverse_iterator to achieve the same below!

void removeNegatives(vector<int> & numbers) {

    for(vector<int>::iterator it = numbers.begin(); it != numbers.end();) { 
        if (*it < 0) {
// we must remove this number
        it = numbers.erase(it); // 4 5 32 11
    } else
    it++;   
    }
}

int main(void) {

string buffer;
getline(cin, buffer);

vector<int> numbers = readNumbers(buffer);

removeNegatives(numbers);

printReverse(numbers);

return 0;

}
