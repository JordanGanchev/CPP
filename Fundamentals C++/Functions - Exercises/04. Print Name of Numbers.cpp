#include <iostream>
#include<string>
using namespace std;

string numberToWord(int number) {
    switch (number){
        case 0: return "zero";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
    }
    return "";
}

string decimalToWord(int n){
    switch (n){
        case 2: return "twenty";
        case 3: return "thirty";
        case 4: return "forty";
        case 5: return "fifty";
        case 6: return "sixty";
        case 7: return "seventy";
        case 8: return "eighty";
        case 9: return "ninety";
    }
    return "";
}

string teensToWord(int n) {
    switch (n){
        case 0: return "ten";
        case 1: return "eleven";
        case 2: return "twelve";
        case 3: return "thirteen";
        case 4: return "fourteen";
        case 5: return "fifteen";
        case 6: return "sixteen";
        case 7: return "seventeen";
        case 8: return "eighteen";
        case 9: return "nineteen";
    }
    return "";
}

int main() {
    int n;

    cin >> n;

    if (n == 0) {
        cout << numberToWord(n) << endl;
        return 0;
    }


    int n1 = n % 10;
    int n2 = (n / 10) % 10;
    int n3 = (n / 100) % 10;
    int n4 = (n / 1000);
    
    if (n4)
        cout << numberToWord(n4) << " thousand ";
    if (n3)
        cout << numberToWord(n3) << " hundred ";
    if (n2 >= 2)
        cout << decimalToWord(n2) << " ";

    if (n2 == 1) {
        cout << teensToWord(n1);
    }
    else
        if (n1)
            cout << numberToWord(n1);
    
    
    cout << endl;

    return 0; 
}