
#include <iostream>
#include <vector>
#include <list>
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

int main(void) {

string buffer;
getline(cin, buffer);

vector<int> numbers = readNumbers(buffer);

list<int> result;
vector<int>::size_type from = 0, to = numbers.size()-1;

for(; from <= to; from++, to--) {
    if (from != to)
        result.push_back(numbers[from] + numbers[to]);
    else {
        result.push_back(numbers[from]);
        break;
}
}

for(int i : result)
    cout << i << ' ';
cout << endl;

return 0;

}
