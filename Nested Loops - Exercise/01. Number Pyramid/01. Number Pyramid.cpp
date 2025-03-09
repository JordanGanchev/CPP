#include <iostream>
using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//
//    int currentNumber = 1, row = 1;
//
//    while (currentNumber <= n) {
//        for (int i = 0; currentNumber <= n && i < row; i++) {
//            cout << currentNumber++ << " ";
//        }
//
//        cout << endl;
//        row++;
//    }
//}

int main() {
	int n;
	cin >> n;

	int row = 1, position = 0;

	for (int i = 1; i <= n; i++) {
		cout << i << ' ';
	
		if (++position == row) {
			row++;
			position = 0;
			cout << endl;
		}
	}

}



