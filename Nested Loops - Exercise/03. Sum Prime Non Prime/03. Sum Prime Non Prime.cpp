#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int primeSum = 0, compositeSum = 0;

    string input;
    while (cin >> input && input != "stop") {
        int number = stoi(input);

        if (number < 0) {
            cout << "Number is negative." << endl;
        }
        else
        {
            bool isPrime = number > 1;
            double root = sqrt(number);
            for (int i = 2; isPrime && i <= root; i++) {
                isPrime = number % i != 0;
            }
            if (isPrime) {
                primeSum += number;
            }
            else
            {
                compositeSum += number;
            }
        }
    }
    cout << "Sum of all prime numbers is: " << primeSum << endl;
    cout << "Sum of all non prime numbers is: " << compositeSum << endl;
}
