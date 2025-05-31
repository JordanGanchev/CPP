#include <iostream>
#include <sstream>
#include <list>
using namespace std;

void readTrain(list<int> &train)
{
    string line;
    getline(cin, line);

    istringstream istr(line);
    int railcar;
    while (istr >> railcar)
        train.push_back(railcar);
}

void mergeFromTrain(list<int> &train, list<int> &result, char trainName, string &mergeInfo)
{

    int bachCart = train.back();
    train.pop_back();

    result.push_front(bachCart);
    mergeInfo += trainName;
}

int main()
{
    list<int> trainA, trainB;

    readTrain(trainA);
    readTrain(trainB);

    list<int> result;
    string mergeInfo;

    while (trainA.size() || trainB.size())
    {
        if (trainA.size() == 0)
            mergeFromTrain(trainB, result, 'B', mergeInfo);
        else if (trainB.size() == 0)
            mergeFromTrain(trainA, result, 'A', mergeInfo);
        else
        {
            int endA = trainA.back();
            int endB = trainB.back();
            if (endA < endB)
                mergeFromTrain(trainA, result, 'A', mergeInfo);
            else
                mergeFromTrain(trainB, result, 'B', mergeInfo);
        }
    }

    cout << mergeInfo << endl;
    for (int cart : result)
        cout << cart << ' ';
    cout << endl;

    return 0;
}