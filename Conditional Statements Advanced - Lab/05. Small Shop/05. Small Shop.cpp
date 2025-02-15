#include <iostream>
using namespace std;

int main()
{
	string productName, city;
	cin >> productName >> city;

	double quantity;
	cin >> quantity;

	if (city == "Sofia") {
		if (productName == "coffee") {
			cout << quantity * 0.50 << endl;
		}if (productName == "water") {
			cout << quantity * 0.80 << endl;
		}if (productName == "beer") {
			cout << quantity * 1.2 << endl;
		}if (productName == "sweets") {
			cout << quantity * 1.45 << endl;
		}if (productName == "peanuts") {
			cout << quantity * 1.60 << endl;
		}
	}
	if (city == "Plovdiv") {
		if (productName == "coffee") {
			cout << quantity * 0.40 << endl;
		}if (productName == "water") {
			cout << quantity * 0.70 << endl;
		}if (productName == "beer") {
			cout << quantity * 1.15 << endl;
		}if (productName == "sweets") {
			cout << quantity * 1.30 << endl;
		}if (productName == "peanuts") {
			cout << quantity * 1.5 << endl;
		}
	}
	if (city == "Varna") {
		if (productName == "coffee") {
			cout << quantity * 0.45 << endl;
		}if (productName == "water") {
			cout << quantity * 0.7 << endl;
		}if (productName == "beer") {
			cout << quantity * 1.10 << endl;
		}if (productName == "sweets") {
			cout << quantity * 1.35 << endl;
		}if (productName == "peanuts") {
			cout << quantity * 1.55 << endl;
		}
	}
}

//----------------------------------------------------------------------------------
//MAP in C++ >> dictionary in python

//#include <iostream>
//#include <map>
//
//using namespace std;
//
//int main() {
//	string productName, city;
//	double quantity;
//
//	cin >> productName >> city >> quantity;
//
//
//	map<string, map<string, double>> prices = {
//		{"Sofia",   {{"coffee", 0.50}, {"water", 0.80}, {"beer", 1.20}, {"sweets", 1.45}, {"peanuts", 1.60}}},
//		{"Plovdiv", {{"coffee", 0.40}, {"water", 0.70}, {"beer", 1.15}, {"sweets", 1.30}, {"peanuts", 1.50}}},
//		{"Varna",   {{"coffee", 0.45}, {"water", 0.70}, {"beer", 1.10}, {"sweets", 1.35}, {"peanuts", 1.55}}}
//	};
//
//	if (prices.find(city) != prices.end() && prices[city].find(productName) != prices[city].end()) {
//		cout << quantity * prices[city][productName] << endl;
//	}
//	else {
//		cout << "Invalid city or product" << endl;
//	}
//
//	return 0;
//}
