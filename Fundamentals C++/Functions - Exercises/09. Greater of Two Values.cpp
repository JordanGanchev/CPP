#include <iostream>

using namespace std;

void funcInt(string one, string two){
    int one1, two2;
    one1 = stoi(one);
    two2 = stoi(two);
    if (one1 >= two2)
        cout << one << endl;
    else
        cout << two << endl; 
}
void funcChar(string one, string two){
    if (one >= two)
        cout << one << endl;
    else
        cout << two << endl;
}
void funcString(string one, string two){
    if (one >= two)
        cout << one << endl;
    else
        cout << two << endl;
}

int main() {
    string charOperator, charNumberOne, charNumberTwo;
    cin >> charOperator >> charNumberOne >> charNumberTwo;

    if (charOperator == "int")
        funcInt(charNumberOne, charNumberTwo);
    
    else if (charOperator == "char")
        funcChar(charNumberOne, charNumberTwo);

    else if (charOperator == "string")
        funcString(charNumberOne, charNumberTwo); 
}