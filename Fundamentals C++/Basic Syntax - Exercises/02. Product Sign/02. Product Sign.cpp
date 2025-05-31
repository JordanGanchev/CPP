#include <iostream>
using namespace std;

int main() {
	
    float a, b, c;

    cin >> a >> b >> c;

    int i = 0;

    if (a != 0 && b != 0 && c != 0) {
        if (a < 0)
            i++;
        if (b < 0)
            i++;
        if (c < 0)
            i++;
    }

    bool bPositive = (i % 2 == 0);

    if (bPositive) {
        cout << '+' << endl;
    }
    else
    {
        cout << '-' << endl;
    }

    return 0;
}






//int main()
//{
//    float a, b, c;
//
//    cin >> a >> b >> c;
//
//    if (a * b * c >= 0) {
//        cout << '+' << endl;
//    }
//    else
//    {
//        cout << '-' << endl;
//    }
//
//    return 0;
//}
