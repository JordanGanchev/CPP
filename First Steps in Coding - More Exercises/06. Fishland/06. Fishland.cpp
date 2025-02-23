#include <iostream>

using namespace std;

int main()
{
	double priseMackerel;
	double priceTatsa;
	double weigthBonito;
	double weigthHorseMackerel;
	int weigthMussels;

	cin >> priseMackerel >> priceTatsa >> weigthBonito >> weigthHorseMackerel >> weigthMussels;
	
	double pb = priseMackerel + priseMackerel * 0.6;
	double sb = weigthBonito * pb;
	double ph = priceTatsa + priceTatsa * 0.8;
	double hm = weigthHorseMackerel * ph;
	double sm = weigthMussels * 7.50;

	double sumR = sb + hm + sm;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << sumR << endl;
}

