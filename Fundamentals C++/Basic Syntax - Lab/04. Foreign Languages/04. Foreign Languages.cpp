#include <iostream>
using namespace std;
int main()
{
    string countryName;
    cin >> countryName;

    if (countryName == "USA" || countryName == "England") {
        cout << "English" << endl;
    }
    else if (countryName == "Spain" || countryName == "Argentina" || countryName == "Mexico") {
        cout << "Spanish" << endl;
    }
    else
    {
        cout << "unknown" << endl;
    }
}
