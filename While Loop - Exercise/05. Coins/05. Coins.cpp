//#include <iostream>
//using namespace std;
//
//int main()
//{
//    double amount;
//    cin >> amount;
//    int coins = 0;
//
//    while (amount > 0) {
//        if (amount > 200) {
//            amount -= 200;
//        }
//        else if (amount >= 100) {
//            amount -= 100;
//        }
//        else if (amount >= 50) {
//            amount -= 50;
//        }
//        else if (amount >= 20) {
//            amount -= 20;
//        }
//        else if (amount >= 10) {
//            amount -= 10;
//        }
//        else if (amount >= 5) {
//            amount -= 5;
//        }
//        else if (amount >= 2) {
//            amount -= 2;
//        }
//        else if (amount >= 1) {
//            amount -= 1;
//        }
//
//        coins++;
//    }
//    
//    cout << coins << endl;
//}

#include <iostream>
using namespace std;

int main() {
    double amount;
    cin >> amount;

    int coins = 0;
    int cents = (amount * 100 + 0.5);

    while (cents > 0) {
        if (cents >= 200) {
            cents -= 200;
        }
        else if (cents >= 100) {
            cents -= 100;
        }
        else if (cents >= 50) {
            cents -= 50;
        }
        else if (cents >= 20) {
            cents -= 20;
        }
        else if (cents >= 10) {
            cents -= 10;
        }
        else if (cents >= 5) {
            cents -= 5;
        }
        else if (cents >= 2) { 
            cents -= 2;
        }
        else if (cents >= 1) {
            cents -= 1;
        }

        coins++;
    }

    cout << coins << endl;
}
