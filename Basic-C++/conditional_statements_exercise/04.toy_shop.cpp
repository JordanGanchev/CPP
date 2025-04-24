#include <iostream>

using namespace std;

int main()
{
    const double puzzle = 2.60;
    const double talkingDoll = 3.00;
    const double teddyBear = 4.10;
    const double minion = 8.20;
    const double truck = 2.00;

    const double PERCENT_DISCOUNT = 0.25;

    double priceOfTheExcursion;
    cin >> priceOfTheExcursion;

    int numOfPuzzles, numOfTalkingDolls,
    numOfTeddyBears,
    numOfMinions, numOfTrucks;

    cin >> numOfPuzzles >> numOfTalkingDolls >> numOfTeddyBears 
    >> numOfMinions >> numOfTrucks; 

    double discount = 0;
    double totalPrice = 0;

    double sumOrder = numOfPuzzles * puzzle + numOfTalkingDolls * talkingDoll +
                      numOfTeddyBears * teddyBear + numOfMinions * minion +
                      numOfTrucks * truck;
    double numberOfToys = numOfPuzzles + numOfTalkingDolls + numOfTeddyBears +
                          numOfMinions, numTrucks;

    if (numberOfToys >= 50) {
            discount = sumOrder * PERCENT_DISCOUNT;
    }

    totalPrice = sumOrder - discount;
    double totalPriceDiscount = totalPrice * 0.1;
    double profit = totalPrice - totalPriceDiscount;
    double result;
    if (profit >= priceOfTheExcursion) {
        result = profit - priceOfTheExcursion;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Yes! " << result << " lv left." << endl; 

    }else {
        result = priceOfTheExcursion - profit;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Not enough money! " << result << " lv needed." << endl;
    }

    
}

// ---------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
	// 1. Read input
	double tripPrice;
	int puzzles, dolls, bears, minions, trucks;
	cin >> tripPrice >> puzzles >> dolls >> bears >> minions >> trucks;

	// 2. Calculate profit
	double profit = puzzles * 2.6 + dolls * 3 + bears * 4.1 + minions * 8.2 + trucks * 2;
	if (puzzles + dolls + bears + minions + trucks >= 50)
		profit *= 0.75; // Make discount of 25%

	profit *= 0.9; // Pay rent (10% of the profit)

	// 3. Print output
	cout.setf(ios::fixed);
	cout.precision(2);
	
	if (profit >= tripPrice) cout << "Yes! " << profit - tripPrice << " lv left." << endl;
	else cout << "Not enough money! " << tripPrice - profit << " lv needed." << endl;
}