#include <iostream>
#include <list>
#include <sstream>
using namespace std;

list<int> readNumbers(istream & inputStream) {
    list<int> res;

    string buffer;
    getline(inputStream, buffer);

    istringstream istr(buffer);

    int tmp;
        while(istr >> tmp)
            res.push_back(tmp);

        return res;
}

int main()
{
    list<int> l1 = readNumbers(cin);
    list<int> l2 = readNumbers(cin);

    list<int> result;

    list<int>::iterator l1iter = l1.begin();
    list<int>::iterator l2iter = l2.begin();

    while (l1iter != l1.end() || l2iter != l2.end())
    {
        if (l1iter != l1.end()){
            result.push_back(*l1iter);
            l1iter++;
        }
        if (l2iter != l2.end()){
            result.push_back(*l2iter);
            l2iter++;
        }
    }
    for(int i : result)
        cout << i << ' ' << flush;
    
    cout << endl;
    


    return 0;
}