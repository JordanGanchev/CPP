//#include <iostream>
//using namespace std;
//int main()
//{
//    // x -> kv.m_loze
//    // y -> grozde za 1 kv.m
//    // z -> nugni litri vino
//
//    int x, z, numberWorkers;
//    double y;
//    cin >> x >> y >> z >> numberWorkers;
//
//    double totalGrape = x * y;
//    double vino = (totalGrape * 0.4) / 2.5;
//
//    if (vino > z) {
//        double lk = (vino - z) / numberWorkers;
//
//        cout << "Good harvest this year! Total wine: " << round(vino) << " liters." << endl <<
//            vino - z << " liters left -> " << lk << " liters per person." << endl;
//    }
//    else
//    {
//        double diff = z - vino;
//
//        cout << "It will be a tough winter! More " << round(diff) << " liters wine needed.";
//    }
//}


#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main() {
    int x, z, numberWorkers;
    double y;

    cin >> x >> y >> z >> numberWorkers;

    double totalGrape = x * y;
    double vino = (totalGrape * 0.4) / 2.5;

    cout << fixed << setprecision(0);

    if (vino >= z) {
        double extraWine = vino - z;
        double perWorker = extraWine / numberWorkers;

        cout << "Good harvest this year! Total wine: " << ceil(vino) << " liters." << endl;
        cout << ceil(extraWine) << " liters left -> " << ceil(perWorker) << " liters per person." << endl;
    }
    else {
        double deficit = z - vino;
        cout << "It will be a tough winter! More " << floor(deficit) << " liters wine needed." << endl;
    }

    return 0;
}
