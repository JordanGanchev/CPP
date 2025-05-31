
//#include <cctype>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    string text;
//    double numberLiters;
//
//    cin >> text >> numberLiters;
//    
//    if (text == "Diesel" or text == "Gasoline" or text == "Gas") {
//     
//        if (numberLiters >= 25) {
//            cout << "You have enough " << tolower(text) << "." << endl;;
//        }
//        else if (numberLiters < 25) {
//            cout << "Fill your tank with " << tolower(text[0]) << "!" << endl;;
//        }
//    }
//    else
//    {
//        cout << "Invalid fuel!" << endl;
//    }
//}


#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string text;
    double numberLiters;

    cin >> text >> numberLiters;

    if (text == "Diesel" || text == "Gasoline" || text == "Gas") {
        string fuelType = text;
        transform(fuelType.begin(), fuelType.end(), fuelType.begin(), ::tolower); 

        if (numberLiters >= 25) {
            cout << "You have enough " << fuelType << "." << endl;
        }
        else {
            cout << "Fill your tank with " << fuelType << "!" << endl;
        }
    }
    else {
        cout << "Invalid fuel!" << endl;
    }

    return 0;
}