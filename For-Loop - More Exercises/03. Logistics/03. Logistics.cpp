#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numberLoad, load;
    cin >> numberLoad;

    int sumTon = 0;
    double price = 0.00;

    int lightCount = 0, mediumCount = 0, heavyCount = 0;

    for (int i = 0; i < numberLoad; i++) {
        cin >> load;
        sumTon += load;

        if (load <= 3) {
            price += 200 * load;
            lightCount += load;
        }
        else if (load <= 11) {
            price += 175 * load;
            mediumCount += load;
        }
        else {
            price += 120 * load;
            heavyCount += load;
        }
    }

    cout << fixed << setprecision(2);
    cout << price / sumTon << endl;
    cout << (lightCount * 100.0) / sumTon << "%" << endl; 
    cout << (mediumCount * 100.0) / sumTon << "%" << endl;
    cout << (heavyCount * 100.0) / sumTon << "%" << endl;  
}



//#include <iostream>
//using namespace std;
//int main()
//{
//    int numberLoad, load;
//    cin >> numberLoad;
//
//    int sumTon = 0;
//    double price = 0.00;
//
//    for (int i = 1; i <= numberLoad; i++) {
//        cin >> load;
//
//        sumTon += load;
//
//        if (load <= 3) {
//            price += (200 * load);
//        }
//        else if (load >= 4 && load <= 11) {
//            price += (175 * load);
//        }
//        else if (load > 11) {
//            price += (120 * load);
//        }
//
//    }
//    cout << sumTon << endl;
//}
