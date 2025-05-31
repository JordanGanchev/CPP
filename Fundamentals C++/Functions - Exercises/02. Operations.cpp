#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int division(int a, int b){
    return a / b;
}

int calculate(char operation, int a, int b) {
    switch (operation) {
        case '+': return add(a, b);
        case '-': return sub(a, b);
        case '*': return mul(a, b);
        case '/': return division(a, b);
    }

    return 0;

}

int main() 
{
    int a, b;
    cin >> a >> b;

    char operation;
    cin >> operation;

    cout << calculate(operation, a, b) << endl;

    return 0;
}