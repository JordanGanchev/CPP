#include <iostream>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}


//#include <iostream>
//using namespace std;
//int main()
//{
//
//	int a, b;
//	cin >> a >> b;
//
//	if (b < a) {
//		int tamp = a;
//		a = b;
//		b = tamp;
//		// swap(a, b);
//	}
//	// sure a < b
//
//	int gcd = a;
//	for (; gcd > 0; gcd--) {
//		if (a % gcd == 0 && b % gcd == 0) break;
//	}
//
//	cout << gcd << endl;
//	return 0;
//}


